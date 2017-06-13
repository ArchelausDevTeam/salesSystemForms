#pragma once
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

ref class DataServices : public System::Windows::Forms::Form
{
private:
	String^ constr;
	String^ qstr;
public:
	DataServices();
	virtual ~DataServices();
	MySqlConnection^ Connection();
	bool Authentication(MySqlConnection^ con, String^ qstr);
	void InsertUser(MySqlConnection^ con, String^ qstr);
	array<String^>^ SelectCategory(MySqlConnection^ con, String^ qstr);
	void SelectProductName(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ListBox^ lb);
	void SelectProductDetails(MySqlConnection^ con, String^ qstr, System::Windows::Forms::Label^ lbl1, System::Windows::Forms::Label^ lbl2);
	String^ SelectProductId(MySqlConnection^ con, String^ qstr);
	String^ SelectCartId(MySqlConnection^ con, String^ qstr);
	void InsertItemsIntoCart(MySqlConnection^ con, String^ qstr);
	String^ SelectProductImage(MySqlConnection^ con, String^ qstr);
	String^ LoginQuery(String^ username, String^ password);
	String^ SignupQuery(String^ firstName, String^ lastName, String^ userName, String^ password);
	String^ CategoryQuery();
	String^ ProductNameQuery(String^ category);
	String^ ProductPrice(String^ name);
	String^ ProductDetailsQuery(String^ name);
	String^ ProductIdQuery(String^ name);
	String^ ProductImageQuery(String^ name);
	String^ ProductNameById(String^ name);
	String^ ProductAmountQuery(String^ cart_id);
	String^ CartIdQuery();
	String^ CartItems(String^ cartItemId, String^ cartId, String^ productId, String^ productQuantity);
};

