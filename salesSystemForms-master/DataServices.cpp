#include "DataServices.h"

DataServices::DataServices()
{
	
}


DataServices::~DataServices()
{
}

//Method that returns the connection to server, to be used within the query methods
MySqlConnection^ DataServices::Connection() 
{
	constr = "Server=223.27.22.124;Uid=archelaus;Pwd=t3ddyb3ar;Database=archelaus_online_store";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	return con;
}

//Each query method performs a specific task and requires a connection and a query parameter. Authentication returns true if the reader returns a value from the query
bool DataServices::Authentication(MySqlConnection^ con, String^ qstr) 
{
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count = count + 1;
		}
		con->Close();
		if (count == 1) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

//Method for signing up a new user
void DataServices::InsertUser(MySqlConnection^ con, String^ qstr) 
{
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

//method for selecting all categories from database. Populates an array with all item categories and returns that array when called 
array<String^>^ DataServices::SelectCategory(MySqlConnection^ con, String^ qstr)
{

	// VERY IMPORTANT!! the size of the array must be equal to the number of products in the database or the program will throw a null exception
	array< String^ >^ categoryArray = gcnew array<String^>(4);
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			String^ category;
			category = dr->GetString("product_category");
			categoryArray[count] = category;
			count++;
		}
		con->Close();
		return categoryArray;
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

//method for selecting the product names and populating the product listbox, I will rewrite this to populate an array like the method above
void DataServices::SelectProductName(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ListBox^ lb)
{
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		while (dr->Read()) 
		{
			String^ product;
			product = dr->GetString("product_name");
			lb->Items->Add(product);
		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

//method for selecting the product details and populating the labels, I will rewrite this to populate an array like the method above
void DataServices::SelectProductDetails(MySqlConnection^ con, String^ qstr, System::Windows::Forms::Label^ lbl1, System::Windows::Forms::Label^ lbl2) 
{
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		while (dr->Read()) {
			String^ price;
			String^ quantity;

			price = dr->GetFloat("product_price").ToString();
			quantity = dr->GetFloat("product_quantity").ToString();
			lbl1->Text = "$ " + price;
			lbl2->Text = quantity;
		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

//method for selecting the product image path location
String^ DataServices::SelectProductImage(MySqlConnection^ con, String^ qstr) 
{
	String^ imagePath;

	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		while (dr->Read())
		{
			imagePath = dr->GetString("image_url");
		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	return imagePath;
}

//Below are all the different methods containing queries
String^ DataServices::LoginQuery(String ^ username, String ^ password)
{
	qstr = "select user_username, user_password from user where user_username ='" + username + "' and user_password ='" + password+"'";
	return qstr;
}

String^ DataServices::SignupQuery(String^ firstName, String^ lastName, String^ userName, String^ password)
{
	qstr = "insert into user (first_name, last_name, user_username, user_password) values ('"+firstName+"','"+lastName + "','" + userName + "','" + password + "')";
	return qstr;
}

String^ DataServices::CategoryQuery()
{
	qstr = "SELECT product_category FROM product";
	return qstr;
}

String^ DataServices::ProductNameQuery(String^ category)
{
	qstr = "SELECT product_name FROM product where product_category = '"+category+"'";
	return qstr;
}

String^ DataServices::ProductDetailsQuery(String^ name)
{
	qstr = "SELECT product_price, product_quantity FROM product where product_name = '" + name + "'";
	return qstr;
}

String^ DataServices::ProductImageQuery(String^ name)
{
	qstr = "SELECT image_url FROM product where product_name = '" + name + "'";
	return qstr;
}


