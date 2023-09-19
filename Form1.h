#pragma once
#include "Zavdannya.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::TextBox^ Result_A;
	private: System::Windows::Forms::TextBox^ Result_B;
	private: System::Windows::Forms::Label^ B;
	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::Button^ Button;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->Result_A = (gcnew System::Windows::Forms::TextBox());
			this->Result_B = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::Label());
			this->Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обчислення значень функцій";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(10, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть номер вашого варіанту";
			// 
			// Input
			// 
			this->Input->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Input->Location = System::Drawing::Point(310, 50);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(70, 27);
			this->Input->TabIndex = 2;
			// 
			// Result_A
			// 
			this->Result_A->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Result_A->Location = System::Drawing::Point(310, 130);
			this->Result_A->Name = L"Result_A";
			this->Result_A->Size = System::Drawing::Size(166, 22);
			this->Result_A->TabIndex = 3;
			// 
			// Result_B
			// 
			this->Result_B->Location = System::Drawing::Point(310, 100);
			this->Result_B->Name = L"Result_B";
			this->Result_B->Size = System::Drawing::Size(166, 22);
			this->Result_B->TabIndex = 4;
			// 
			// B
			// 
			this->B->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B->AutoSize = true;
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(10, 100);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(166, 20);
			this->B->TabIndex = 5;
			this->B->Text = L"Значення функії B";
			// 
			// A
			// 
			this->A->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->A->AutoSize = true;
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->Location = System::Drawing::Point(10, 130);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(165, 20);
			this->A->TabIndex = 6;
			this->A->Text = L"Значення функії A";
			// 
			// Button
			// 
			this->Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Button->AutoSize = true;
			this->Button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button->Location = System::Drawing::Point(310, 220);
			this->Button->Name = L"Button";
			this->Button->Size = System::Drawing::Size(124, 34);
			this->Button->TabIndex = 7;
			this->Button->Text = L"Обчислити";
			this->Button->UseVisualStyleBackColor = true;
			this->Button->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 438);
			this->Controls->Add(this->Button);
			this->Controls->Add(this->A);
			this->Controls->Add(this->B);
			this->Controls->Add(this->Result_B);
			this->Controls->Add(this->Result_A);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Завдання 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
		double N = System::Convert::ToDouble(Input->Text);
		Zavdannya Zavd;
		Zavd.F_B(N);
		Zavd.F_A(N);
		Result_B->Text = System::Convert::ToString(Zavd.getb());
		Result_A->Text = System::Convert::ToString(Zavd.geta());
	}
	};
}