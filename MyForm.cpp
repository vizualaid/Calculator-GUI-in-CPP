#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
	[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm frm;
	Application::Run(% frm);
}
/*
(Header file code) also in file MyForm.h 
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Oswald Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(77, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 55);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Oswald Medium", 24, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(409, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 55);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(342, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n/a";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(92, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 59);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(409, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 5;
			this->button3->Text = L"x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(561, 267);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 60);
			this->button4->TabIndex = 6;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Oswald Medium", 25.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(344, 374);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 60);
			this->label2->TabIndex = 7;
			this->label2->Text = L"=";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Orbitron", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(183, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(328, 46);
			this->label3->TabIndex = 8;
			this->label3->Text = L"CALCULATOR";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 501);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "+";
		int res = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		label2->Text = System::Convert::ToString(res);


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "-";
	int res;
	if (System::Convert::ToInt16(textBox1->Text) >= System::Convert::ToInt16(textBox2->Text))
	{
		 res = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
		 label2->Text = System::Convert::ToString(res);
	}
	else
	{
		 res = System::Convert::ToInt16(textBox2->Text) - System::Convert::ToInt16(textBox1->Text);
		 label2->Text = System::Convert::ToString(res) + "-";
	}

	//label2->Text = System::Convert::ToString(res) + "-";

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "/";
	if (textBox2->Text == "0") {
		MessageBox::Show("System.DivideByZeroException", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//label2->Text = "Error System.DivideByZeroException";
		}


	else {
		int res = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
		label2->Text = System::Convert::ToString(res);
	}

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "x";
	int res = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
	label2->Text = System::Convert::ToString(res) + " = ";

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

*/
