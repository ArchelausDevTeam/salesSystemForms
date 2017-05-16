#include "DataServices.h"
#include "Store.h"

#pragma once

namespace salesSystemDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^ otherform;
	public:
		SignUp(System::Windows::Forms::Form ^ o)
		{
			InitializeComponent();
			otherform = o;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  firstNameField;
	private: System::Windows::Forms::TextBox^  lastNameField;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  userNameField;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  passwordField;
	private: System::Windows::Forms::TextBox^  passwordConfirmField;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  consentSwitch;
	private: System::Windows::Forms::Button^  registerKey;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUp::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->firstNameField = (gcnew System::Windows::Forms::TextBox());
			this->lastNameField = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->userNameField = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->passwordField = (gcnew System::Windows::Forms::TextBox());
			this->passwordConfirmField = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->consentSwitch = (gcnew System::Windows::Forms::CheckBox());
			this->registerKey = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 229);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(423, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"oh, hey there";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(367, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"let\'s get you ready to start shopping.";
			// 
			// firstNameField
			// 
			this->firstNameField->Location = System::Drawing::Point(274, 111);
			this->firstNameField->Name = L"firstNameField";
			this->firstNameField->Size = System::Drawing::Size(160, 20);
			this->firstNameField->TabIndex = 3;
			// 
			// lastNameField
			// 
			this->lastNameField->Location = System::Drawing::Point(440, 111);
			this->lastNameField->Name = L"lastNameField";
			this->lastNameField->Size = System::Drawing::Size(180, 20);
			this->lastNameField->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(368, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"First Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(552, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Last Name";
			// 
			// userNameField
			// 
			this->userNameField->Location = System::Drawing::Point(408, 153);
			this->userNameField->Name = L"userNameField";
			this->userNameField->Size = System::Drawing::Size(212, 20);
			this->userNameField->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(534, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Username";
			// 
			// passwordField
			// 
			this->passwordField->Location = System::Drawing::Point(274, 196);
			this->passwordField->MaxLength = 10;
			this->passwordField->Name = L"passwordField";
			this->passwordField->PasswordChar = '*';
			this->passwordField->Size = System::Drawing::Size(170, 20);
			this->passwordField->TabIndex = 9;
			// 
			// passwordConfirmField
			// 
			this->passwordConfirmField->Location = System::Drawing::Point(450, 196);
			this->passwordConfirmField->MaxLength = 10;
			this->passwordConfirmField->Name = L"passwordConfirmField";
			this->passwordConfirmField->PasswordChar = '*';
			this->passwordConfirmField->Size = System::Drawing::Size(170, 20);
			this->passwordConfirmField->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label6->Location = System::Drawing::Point(385, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label7->Location = System::Drawing::Point(513, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Confirm Password";
			// 
			// consentSwitch
			// 
			this->consentSwitch->AutoSize = true;
			this->consentSwitch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->consentSwitch->Location = System::Drawing::Point(394, 233);
			this->consentSwitch->Name = L"consentSwitch";
			this->consentSwitch->Size = System::Drawing::Size(233, 20);
			this->consentSwitch->TabIndex = 13;
			this->consentSwitch->Text = L"I agree to the terms and conditions.";
			this->consentSwitch->UseVisualStyleBackColor = true;
			// 
			// registerKey
			// 
			this->registerKey->Location = System::Drawing::Point(545, 269);
			this->registerKey->Name = L"registerKey";
			this->registerKey->Size = System::Drawing::Size(75, 23);
			this->registerKey->TabIndex = 14;
			this->registerKey->Text = L"Register";
			this->registerKey->UseVisualStyleBackColor = true;
			this->registerKey->Click += gcnew System::EventHandler(this, &SignUp::registerUser);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 315);
			this->Controls->Add(this->registerKey);
			this->Controls->Add(this->consentSwitch);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->passwordConfirmField);
			this->Controls->Add(this->passwordField);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->userNameField);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lastNameField);
			this->Controls->Add(this->firstNameField);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SignUp";
			this->Text = L"Let\'s Get You Signed Up.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void registerUser(System::Object^  sender, System::EventArgs^  e) 
		{
			if (passwordField->Text != "" && passwordConfirmField->Text != "") 
			{
				if (consentSwitch->Checked && (passwordField->Text)->Equals(passwordConfirmField->Text) && !((userNameField->Text)->Equals("")))
				{
					/*MessageBox::Show("Your account will be processed in a few short moments.", "I'm So Excited. I just can't Hide it.");
					firstNameField->Text = "";
					lastNameField->Text = "";
					userNameField->Text = "";
					passwordField->Text = "";
					passwordConfirmField->Text = "";*/
					UserSignup();
					MessageBox::Show("User has been created!");
					this->Hide();
					otherform->Show();
				}
				else if (!(consentSwitch->Checked) && (passwordField->Text)->Equals(passwordConfirmField->Text))
				{
					MessageBox::Show("You have not provided consent to the terms and conditions of the service.", "Houston, We Have a Problem.", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if(!((passwordField->Text)->Equals(passwordConfirmField->Text)))
				{
					MessageBox::Show("The fields don't match and you have not provided consent to the conditions of the service.", "We Have a Problem.", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if ((userNameField->Text)->Equals(""))
			{
				MessageBox::Show("You cannot leave your email address blank.", "We Have a Problem.", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else 
			{
				MessageBox::Show("Please fill the fields.");
			}
		}

		void salesSystemDemo::SignUp::UserSignup()
		{
			String^ firstName;
			String^ lastName;
			String^ userName;
			String^ password;

			DataServices ds;

			firstName = firstNameField->Text;
			lastName = lastNameField->Text;
			userName = userNameField->Text;
			password = passwordField->Text;

			ds.InsertUser(ds.Connection(), ds.SignupQuery(firstName, lastName, userName, password));

		}
};
}
