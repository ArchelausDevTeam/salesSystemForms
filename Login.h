#pragma once

namespace salesSystemDemo 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  infoKey;
	private: System::Windows::Forms::Button^  exitKey;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->infoKey = (gcnew System::Windows::Forms::Button());
			this->exitKey = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(215, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 20);
			this->textBox2->TabIndex = 1;
			// 
			// infoKey
			// 
			this->infoKey->Location = System::Drawing::Point(12, 230);
			this->infoKey->Name = L"infoKey";
			this->infoKey->Size = System::Drawing::Size(75, 23);
			this->infoKey->TabIndex = 2;
			this->infoKey->Text = L"About";
			this->infoKey->UseVisualStyleBackColor = true;
			this->infoKey->Click += gcnew System::EventHandler(this, &Login::informationDisplay);
			// 
			// exitKey
			// 
			this->exitKey->Location = System::Drawing::Point(93, 230);
			this->exitKey->Name = L"exitKey";
			this->exitKey->Size = System::Drawing::Size(75, 23);
			this->exitKey->TabIndex = 3;
			this->exitKey->Text = L"Exit";
			this->exitKey->UseVisualStyleBackColor = true;
			this->exitKey->Click += gcnew System::EventHandler(this, &Login::exitApplication);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 265);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->exitKey);
			this->Controls->Add(this->infoKey);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Login";
			this->Text = L"Are You a Member\?";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
};
}
