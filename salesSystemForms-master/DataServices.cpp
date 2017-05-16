#include "DataServices.h"

DataServices::DataServices()
{
	
}


DataServices::~DataServices()
{
}

MySqlConnection^ DataServices::Connection() {
	constr = "Server=223.27.22.124;Uid=archelaus;Pwd=t3ddyb3ar;Database=archelaus_online_store";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	return con;
}


bool DataServices::Authentication(MySqlConnection^ con, String^ qstr) {
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read()) {
			count = count + 1;
		}
		con->Close();
		if (count == 1) {
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

void DataServices::InsertUser(MySqlConnection^ con, String^ qstr) {
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

void DataServices::SelectCategory(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ComboBox^ cb) {
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		while (dr->Read()) {
			String^ category;

			category = dr->GetString("product_category");
			cb->Items->Add(category);
		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

void DataServices::SelectProductName(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ListBox^ lb) {
	try
	{
		MySqlCommand^ cmd = gcnew MySqlCommand(qstr, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		while (dr->Read()) {
			String^ category;

			category = dr->GetString("product_name");
			lb->Items->Add(category);
		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

void DataServices::SelectProductDetails(MySqlConnection^ con, String^ qstr, System::Windows::Forms::Label^ lbl1, System::Windows::Forms::Label^ lbl2) {
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


