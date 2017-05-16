#include "DataServices.h"

#pragma once

namespace salesSystemDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Store
	/// </summary>
	public ref class Store : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^ otherform;
	public:
		Store(System::Windows::Forms::Form ^ o)
		{
			InitializeComponent();
			otherform = o;
			PopulateCategory();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Store()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  productView;
	private: System::Windows::Forms::ComboBox^  productCategory;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  productsListing;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  productQty;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  addToCart;
	private: System::Windows::Forms::Label^  label10;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Store::typeid));
			this->productView = (gcnew System::Windows::Forms::PictureBox());
			this->productCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->productsListing = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->productQty = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->addToCart = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productQty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addToCart))->BeginInit();
			this->SuspendLayout();
			// 
			// productView
			// 
			this->productView->ImageLocation = L"";
			this->productView->Location = System::Drawing::Point(12, 12);
			this->productView->Name = L"productView";
			this->productView->Size = System::Drawing::Size(300, 300);
			this->productView->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->productView->TabIndex = 0;
			this->productView->TabStop = false;
			// 
			// productCategory
			// 
			this->productCategory->FormattingEnabled = true;
			this->productCategory->Location = System::Drawing::Point(445, 124);
			this->productCategory->Name = L"productCategory";
			this->productCategory->Size = System::Drawing::Size(214, 21);
			this->productCategory->TabIndex = 1;
			this->productCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &Store::productCategory_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->Location = System::Drawing::Point(554, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Product Category";
			// 
			// productsListing
			// 
			this->productsListing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->productsListing->FormattingEnabled = true;
			this->productsListing->ItemHeight = 15;
			this->productsListing->Location = System::Drawing::Point(445, 185);
			this->productsListing->Name = L"productsListing";
			this->productsListing->Size = System::Drawing::Size(214, 154);
			this->productsListing->TabIndex = 3;
			this->productsListing->SelectedIndexChanged += gcnew System::EventHandler(this, &Store::productsListing_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(406, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Products Available in the Selected Category";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label3->Location = System::Drawing::Point(488, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 37);
			this->label3->TabIndex = 5;
			this->label3->Text = L"hey there ;)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(497, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"the store is your oyster.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(21, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Product Cost";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(21, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(21, 389);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Stock Available";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(21, 410);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 10;
			// 
			// productQty
			// 
			this->productQty->Location = System::Drawing::Point(539, 380);
			this->productQty->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->productQty->Name = L"productQty";
			this->productQty->Size = System::Drawing::Size(120, 20);
			this->productQty->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(537, 360);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 16);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Quantity to Request";
			// 
			// addToCart
			// 
			this->addToCart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addToCart.Image")));
			this->addToCart->Location = System::Drawing::Point(25, 444);
			this->addToCart->Name = L"addToCart";
			this->addToCart->Size = System::Drawing::Size(100, 100);
			this->addToCart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->addToCart->TabIndex = 13;
			this->addToCart->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label10->Location = System::Drawing::Point(48, 493);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Add to Cart";
			// 
			// Store
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 556);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->addToCart);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->productQty);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->productsListing);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->productCategory);
			this->Controls->Add(this->productView);
			this->Name = L"Store";
			this->Text = L"Store";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productQty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addToCart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void salesSystemDemo::Store::PopulateCategory()
		{
			DataServices ds;
			array< String^ >^ categoryArray = gcnew array<String^>(100);

			categoryArray = ds.SelectCategory(ds.Connection(), ds.CategoryQuery());

			for (int count = 0; count < categoryArray->Length; count++) 
			{
				if (!productCategory->Items->Contains(categoryArray[count]))
				{
					productCategory->Items->Add(categoryArray[count]->ToString());
				}
			}

		}
		void productCategory_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			DataServices ds;
			String^ category;

			productsListing->Items->Clear();
			delete this->productView->Image;
			label6->Text = "";
			label8->Text = "";

			category = productCategory->Text;

			ds.SelectProductName(ds.Connection(),ds.ProductNameQuery(category), productsListing);
		}
		void productsListing_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			DataServices ds;

			String^ name;
			name = productsListing->Text;

			ds.SelectProductDetails(ds.Connection(),ds.ProductDetailsQuery(name), label6, label8);
			LoadImage();
			
		}

		void LoadImage() {
			DataServices ds;
			String^ name;
			name = productsListing->Text;

			String^ imagePath;
		
			imagePath = ds.SelectProductImage(ds.Connection(), ds.ProductImageQuery(name))->ToString();
			
			productView->Load( imagePath);
			
		}
};
}

