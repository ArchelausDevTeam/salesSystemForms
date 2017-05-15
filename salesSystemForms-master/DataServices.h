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
	void SelectCategory(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ComboBox^ cb);
	void SelectProductName(MySqlConnection^ con, String^ qstr, System::Windows::Forms::ListBox^ lb);
	void SelectProductDetails(MySqlConnection^ con, String^ qstr, System::Windows::Forms::Label^ lbl1, System::Windows::Forms::Label^ lbl2);
	String^ LoginQuery(String^ username, String^ password);
	String^ SignupQuery(String^ firstName, String^ lastName, String^ userName, String^ password);
	String^ CategoryQuery();
	String^ ProductNameQuery(String^ category);
	String^ ProductDetailsQuery(String^ name);
};

