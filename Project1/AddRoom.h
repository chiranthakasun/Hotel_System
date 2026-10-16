#pragma once
#include "insertRoom.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRoom
	/// </summary>
	public ref class AddRoom : public System::Windows::Forms::Form
	{
	public:
		AddRoom(void)
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
		~AddRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtRno;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textRtp;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtBdno;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cmAir;
	private: System::Windows::Forms::ComboBox^ cmOut;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cmAtt;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::ComboBox^ txtStaus;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtRno = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textRtp = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBdno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cmAir = (gcnew System::Windows::Forms::ComboBox());
			this->cmOut = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cmAtt = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtStaus = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(294, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 32);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Add Room";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Room No:";
			// 
			// txtRno
			// 
			this->txtRno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRno->Location = System::Drawing::Point(35, 136);
			this->txtRno->Name = L"txtRno";
			this->txtRno->Size = System::Drawing::Size(187, 30);
			this->txtRno->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(282, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Room Type:";
			// 
			// textRtp
			// 
			this->textRtp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRtp->Location = System::Drawing::Point(282, 136);
			this->textRtp->Name = L"textRtp";
			this->textRtp->Size = System::Drawing::Size(187, 30);
			this->textRtp->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(509, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 25);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Price:";
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(509, 136);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(187, 30);
			this->txtPrice->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(35, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"No of Beds:";
			// 
			// txtBdno
			// 
			this->txtBdno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBdno->Location = System::Drawing::Point(35, 248);
			this->txtBdno->Name = L"txtBdno";
			this->txtBdno->Size = System::Drawing::Size(187, 30);
			this->txtBdno->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(282, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 25);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Status :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(509, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 25);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Air Condition";
			// 
			// cmAir
			// 
			this->cmAir->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"AC", L"Non AC" });
			this->cmAir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmAir->FormattingEnabled = true;
			this->cmAir->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AC", L"Non AC" });
			this->cmAir->Location = System::Drawing::Point(509, 248);
			this->cmAir->Name = L"cmAir";
			this->cmAir->Size = System::Drawing::Size(182, 33);
			this->cmAir->TabIndex = 33;
			// 
			// cmOut
			// 
			this->cmOut->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"AC", L"Non AC" });
			this->cmOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmOut->FormattingEnabled = true;
			this->cmOut->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"True", L"False" });
			this->cmOut->Location = System::Drawing::Point(35, 356);
			this->cmOut->Name = L"cmOut";
			this->cmOut->Size = System::Drawing::Size(182, 33);
			this->cmOut->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(35, 318);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(183, 25);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Outdoor Bathroom :";
			// 
			// cmAtt
			// 
			this->cmAtt->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"True", L"False" });
			this->cmAtt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmAtt->FormattingEnabled = true;
			this->cmAtt->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"True", L"False" });
			this->cmAtt->Location = System::Drawing::Point(282, 356);
			this->cmAtt->Name = L"cmAtt";
			this->cmAtt->Size = System::Drawing::Size(182, 33);
			this->cmAtt->TabIndex = 37;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(282, 318);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(190, 25);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Attached Bathroom :";
			this->label9->Click += gcnew System::EventHandler(this, &AddRoom::label9_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(509, 346);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(187, 48);
			this->btnAdd->TabIndex = 38;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddRoom::btnAdd_Click);
			// 
			// txtStaus
			// 
			this->txtStaus->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"AC", L"Non AC" });
			this->txtStaus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStaus->FormattingEnabled = true;
			this->txtStaus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->txtStaus->Location = System::Drawing::Point(282, 245);
			this->txtStaus->Name = L"txtStaus";
			this->txtStaus->Size = System::Drawing::Size(182, 33);
			this->txtStaus->TabIndex = 39;
			// 
			// AddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(742, 473);
			this->Controls->Add(this->txtStaus);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->cmAtt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->cmOut);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cmAir);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtBdno);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textRtp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtRno);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(595, 200);
			this->Name = L"AddRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"AddRoom";
			this->Load += gcnew System::EventHandler(this, &AddRoom::AddRoom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	if(txtRno->Text == "" || txtPrice->Text == "" || txtBdno->Text == "" || txtStaus->Text == "" || cmAir->Text == "" || cmOut->Text == "" || cmAtt->Text == "")
	{
		MessageBox::Show("Please Fill All Fileds", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		insertRoom^ objectRoom = gcnew insertRoom();
		objectRoom->SetData(txtRno->Text, textRtp->Text, txtPrice->Text, safe_cast<int^>(System::Int32::Parse(txtBdno->Text)), cmAir->Text, txtStaus->Text, cmOut->Text, cmAtt->Text);

		bool result = objectRoom->InsertData();
		if (result)
		{
			MessageBox::Show("Add SucessFull", "Infromation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();

		}
		else
		{
			MessageBox::Show("Cannot Insert Error Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

}
private: System::Void AddRoom_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

ref class AddRoom
{
};
