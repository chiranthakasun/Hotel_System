#pragma once
#include "insertGuest.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddGuest
	/// </summary>
	public ref class AddGuest : public System::Windows::Forms::Form
	{
	public:
		AddGuest(void)
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
		~AddGuest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	protected:
	private: System::Windows::Forms::TextBox^ txtMob;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNic;



	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::ComboBox^ cmGen;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ txtAdr;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;

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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtMob = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNic = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cmGen = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAdr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->btnAdd->Location = System::Drawing::Point(424, 374);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(214, 48);
			this->btnAdd->TabIndex = 36;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddGuest::btnAdd_Click);
			// 
			// txtMob
			// 
			this->txtMob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMob->Location = System::Drawing::Point(111, 265);
			this->txtMob->Name = L"txtMob";
			this->txtMob->Size = System::Drawing::Size(214, 32);
			this->txtMob->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(114, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 29);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Mobile No :";
			// 
			// txtNic
			// 
			this->txtNic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNic->Location = System::Drawing::Point(424, 267);
			this->txtNic->Name = L"txtNic";
			this->txtNic->Size = System::Drawing::Size(214, 32);
			this->txtNic->TabIndex = 32;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(419, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 29);
			this->label8->TabIndex = 30;
			this->label8->Text = L"NIC : ";
			// 
			// cmGen
			// 
			this->cmGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmGen->FormattingEnabled = true;
			this->cmGen->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cmGen->Location = System::Drawing::Point(111, 379);
			this->cmGen->Name = L"cmGen";
			this->cmGen->Size = System::Drawing::Size(170, 34);
			this->cmGen->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(106, 338);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 29);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Gender : ";
			// 
			// txtAdr
			// 
			this->txtAdr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdr->Location = System::Drawing::Point(424, 155);
			this->txtAdr->Name = L"txtAdr";
			this->txtAdr->Size = System::Drawing::Size(214, 32);
			this->txtAdr->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(419, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 29);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Address :";
			this->label3->Click += gcnew System::EventHandler(this, &AddGuest::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(106, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Name : ";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(111, 155);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(214, 32);
			this->txtName->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(299, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 32);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Add Guest";
			// 
			// AddGuest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(760, 520);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtMob);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtNic);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cmGen);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAdr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(595, 200);
			this->Name = L"AddGuest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"AddGuest";
			this->Load += gcnew System::EventHandler(this, &AddGuest::AddGuest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtName->Text == "" || txtNic->Text == "" || txtAdr->Text == "" || txtMob->Text == "" || cmGen->Text == "")
	{
		MessageBox::Show("Please Fill All Fileds", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		insertGuest^ objectUser = gcnew insertGuest();
		objectUser->setData(txtNic->Text);
		objectUser->SetCommon(txtName->Text, txtAdr->Text, cmGen->Text, txtMob->Text);

		bool result = objectUser->insertData();

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
private: System::Void AddGuest_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
