#pragma once
#include "DataServices.h"
#include <cstdlib> 
#include <ctime>

namespace salesSystemDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for Payment
	/// </summary>
	public ref class Payment : public System::Windows::Forms::Form
	{
	public:
		Payment(void)
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
		~Payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  payLbl;
	protected:
	private: System::Windows::Forms::ListView^  itemsView;
	private: System::Windows::Forms::Label^  label1;

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
			this->payLbl = (gcnew System::Windows::Forms::Label());
			this->itemsView = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// payLbl
			// 
			this->payLbl->AutoSize = true;
			this->payLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payLbl->Location = System::Drawing::Point(225, 9);
			this->payLbl->Name = L"payLbl";
			this->payLbl->Size = System::Drawing::Size(106, 29);
			this->payLbl->TabIndex = 0;
			this->payLbl->Text = L"Payment";
			// 
			// itemsView
			// 
			this->itemsView->Location = System::Drawing::Point(12, 61);
			this->itemsView->Name = L"itemsView";
			this->itemsView->Size = System::Drawing::Size(151, 216);
			this->itemsView->TabIndex = 1;
			this->itemsView->UseCompatibleStateImageBehavior = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Items";
			// 
			// Payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 446);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->itemsView);
			this->Controls->Add(this->payLbl);
			this->Name = L"Payment";
			this->Text = L"Payment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void DisplayingInfo()
		{
			DataServices ds;

			Int32^ tempCartId;
			String^ cartId;
			Int32^ totalAmount;
			String^ product_quantity;
			String^ product_cost;

			product_quantity = ds.ProductAmountQuery(cartId);

		}
		
#pragma endregion
	};
}
