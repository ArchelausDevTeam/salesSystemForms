#include "SignUp.h"
#include "Store.h"
#include "DataServices.h"

#pragma once

namespace salesSystemDemo 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool CheckLogin();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  usernameField;
	protected:

	private: System::Windows::Forms::TextBox^  passwordField;
	protected:

	protected:

	private: System::Windows::Forms::Button^  infoKey;
	private: System::Windows::Forms::Button^  exitKey;
	private: System::Windows::Forms::PictureBox^  loginImage;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  loginKey;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  signUpKey;

	ToolTip^ info = gcnew ToolTip;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->usernameField = (gcnew System::Windows::Forms::TextBox());
			this->passwordField = (gcnew System::Windows::Forms::TextBox());
			this->infoKey = (gcnew System::Windows::Forms::Button());
			this->exitKey = (gcnew System::Windows::Forms::Button());
			this->loginImage = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->loginKey = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->signUpKey = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loginImage))->BeginInit();
			this->SuspendLayout();
			// 
			// usernameField
			// 
			this->usernameField->Location = System::Drawing::Point(223, 114);
			this->usernameField->Name = L"usernameField";
			this->usernameField->Size = System::Drawing::Size(231, 20);
			this->usernameField->TabIndex = 0;
			// 
			// passwordField
			// 
			this->passwordField->Location = System::Drawing::Point(223, 155);
			this->passwordField->Name = L"passwordField";
			this->passwordField->PasswordChar = '*';
			this->passwordField->Size = System::Drawing::Size(230, 20);
			this->passwordField->TabIndex = 1;
			// 
			// infoKey
			// 
			this->infoKey->Location = System::Drawing::Point(12, 266);
			this->infoKey->Name = L"infoKey";
			this->infoKey->Size = System::Drawing::Size(75, 23);
			this->infoKey->TabIndex = 2;
			this->infoKey->Text = L"About";
			this->infoKey->UseVisualStyleBackColor = true;
			this->infoKey->Click += gcnew System::EventHandler(this, &Login::informationDisplay);
			// 
			// exitKey
			// 
			this->exitKey->Location = System::Drawing::Point(93, 266);
			this->exitKey->Name = L"exitKey";
			this->exitKey->Size = System::Drawing::Size(75, 23);
			this->exitKey->TabIndex = 3;
			this->exitKey->Text = L"Exit";
			this->exitKey->UseVisualStyleBackColor = true;
			this->exitKey->Click += gcnew System::EventHandler(this, &Login::exitApplication);
			// 
			// loginImage
			// 
			this->loginImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginImage.Image")));
			this->loginImage->Location = System::Drawing::Point(9, 14);
			this->loginImage->Name = L"loginImage";
			this->loginImage->Size = System::Drawing::Size(200, 200);
			this->loginImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->loginImage->TabIndex = 4;
			this->loginImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(305, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"welcome.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(248, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"let\'s get you back into action.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(389, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(389, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password";
			// 
			// loginKey
			// 
			this->loginKey->Location = System::Drawing::Point(371, 191);
			this->loginKey->Name = L"loginKey";
			this->loginKey->Size = System::Drawing::Size(75, 23);
			this->loginKey->TabIndex = 9;
			this->loginKey->Text = L"Sign In";
			this->loginKey->UseVisualStyleBackColor = true;
			this->loginKey->Click += gcnew System::EventHandler(this, &Login::loginKey_Click);
			this->loginKey->MouseHover += gcnew System::EventHandler(this, &Login::OnMouseHover);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(234, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"not a Member\? join the Family.";
			// 
			// signUpKey
			// 
			this->signUpKey->Location = System::Drawing::Point(371, 266);
			this->signUpKey->Name = L"signUpKey";
			this->signUpKey->Size = System::Drawing::Size(75, 23);
			this->signUpKey->TabIndex = 11;
			this->signUpKey->Text = L"Join Us.";
			this->signUpKey->UseVisualStyleBackColor = true;
			this->signUpKey->Click += gcnew System::EventHandler(this, &Login::signUpKey_Click);
			this->signUpKey->MouseHover += gcnew System::EventHandler(this, &Login::OnMouseHover);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 312);
			this->Controls->Add(this->signUpKey);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->loginKey);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loginImage);
			this->Controls->Add(this->exitKey);
			this->Controls->Add(this->infoKey);
			this->Controls->Add(this->passwordField);
			this->Controls->Add(this->usernameField);
			this->Name = L"Login";
			this->Text = L"Are You a Member\?";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loginImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// End of Pre-Generated Properties for the salesSystemDemo::Login form.

	private: System::Void informationDisplay(System::Object^  sender, System::EventArgs^  e) 
	{
		MessageBox::Show("2017 Copyright Archelaus Design.", "About this Application", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	// Method to view the about key contents.

	private: System::Void exitApplication(System::Object^  sender, System::EventArgs^  e) 
	{
		MessageBox::Show("The application will now exit.", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Application::Exit();
	}
			
			 void OnMouseHover(System::Object ^sender, System::EventArgs ^e);
			 //Custom EventHandler declarations.
	private: System::Void signUpKey_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SignUp^ registration = gcnew SignUp(this);

		MessageBox::Show("You will now be redirected to a register menu.", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();
		registration->Show();
		//Moving you to the Registration Form.
	}
	private: System::Void loginKey_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		/*
		if ((emailField->Text)->Equals("test@example.com") && (passwordField->Text)->Equals("admin")) 
		{
			Store^ content = gcnew Store();

			MessageBox::Show("You have special access to the contents page. This is to be removed at a later stage.", "Override Alert", MessageBoxButtons::OK);
			emailField->Text = "";
			passwordField->Text = "";
			content->Show();
			this->Hide();
			
		}
		else 
		{
			MessageBox::Show("The accounts system has yet to be established.", "Status Note", MessageBoxButtons::OK);
		}*/
		if (CheckLogin()) {
			Store^ content = gcnew Store(this);
			content->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Incorrect password.", "Status Note", MessageBoxButtons::OK);
		}
		
	}
};
}


void salesSystemDemo::Login::OnMouseHover(System::Object ^sender, System::EventArgs ^e)
{
	info->AutoPopDelay = 5000;
	info->ShowAlways = true;
	// Delays to be Set
	info->SetToolTip(this->loginKey, "This is to be completed when the database is connected to the application.");
	info->SetToolTip(this->signUpKey, "You can become a member today :D");
	// loginKey->ToolTip^
}

bool salesSystemDemo::Login::CheckLogin() {
	String^ username;
	String^ password;
	DataServices ds;
	
	username = usernameField->Text;
	password = passwordField->Text;

	if (ds.Authentication(ds.Connection(), ds.LoginQuery(username, password))) {
		return true;
	}
	else {
		return false;
	}
	
}
