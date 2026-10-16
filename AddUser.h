#pragma once
#include "insertUser.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtAdr;
	private: System::Windows::Forms::ComboBox^ cmRol;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmGen;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::TextBox^ txtMob;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnAdd;

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
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAdr = (gcnew System::Windows::Forms::TextBox());
			this->cmRol = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmGen = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtMob = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(312, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Users";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(124, 151);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(214, 32);
			this->txtName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(119, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(432, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address : ";
			this->label3->Click += gcnew System::EventHandler(this, &AddUser::label3_Click);
			// 
			// txtAdr
			// 
			this->txtAdr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdr->Location = System::Drawing::Point(437, 151);
			this->txtAdr->Name = L"txtAdr";
			this->txtAdr->Size = System::Drawing::Size(214, 32);
			this->txtAdr->TabIndex = 4;
			// 
			// cmRol
			// 
			this->cmRol->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Manager", L"Receptionist " });
			this->cmRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmRol->FormattingEnabled = true;
			this->cmRol->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Manager", L"Receptionist " });
			this->cmRol->Location = System::Drawing::Point(437, 244);
			this->cmRol->Name = L"cmRol";
			this->cmRol->Size = System::Drawing::Size(173, 34);
			this->cmRol->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(119, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Gender : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(432, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 29);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Role : ";
			// 
			// cmGen
			// 
			this->cmGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmGen->FormattingEnabled = true;
			this->cmGen->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cmGen->Location = System::Drawing::Point(124, 244);
			this->cmGen->Name = L"cmGen";
			this->cmGen->Size = System::Drawing::Size(170, 34);
			this->cmGen->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(119, 302);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L" : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(119, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 29);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Username : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(432, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 29);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Password : ";
			// 
			// txtUser
			// 
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUser->Location = System::Drawing::Point(124, 346);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(214, 32);
			this->txtUser->TabIndex = 13;
			// 
			// txtPass
			// 
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPass->Location = System::Drawing::Point(437, 346);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(214, 32);
			this->txtPass->TabIndex = 14;
			// 
			// txtMob
			// 
			this->txtMob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMob->Location = System::Drawing::Point(124, 452);
			this->txtMob->Name = L"txtMob";
			this->txtMob->Size = System::Drawing::Size(214, 32);
			this->txtMob->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(127, 406);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 29);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Mobile No :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(119, 408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 29);
			this->label10->TabIndex = 15;
			this->label10->Text = L" : ";
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
			this->btnAdd->Location = System::Drawing::Point(437, 443);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(214, 48);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddUser::btnAdd_Click);
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(768, 550);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtMob);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmGen);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmRol);
			this->Controls->Add(this->txtAdr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(595, 182);
			this->Name = L"AddUser";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"AddUser";
			this->Load += gcnew System::EventHandler(this, &AddUser::AddUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtName->Text == "" || txtAdr->Text == "" || txtPass->Text == "" || txtUser->Text == "" || txtMob->Text == "" || cmGen->Text == "" || cmRol->Text == "")
		{
			MessageBox::Show("Please Fill All Fileds", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			insertUser^ objectUser = gcnew insertUser();
			objectUser->setData(txtUser->Text, txtPass->Text, cmRol->Text);
			objectUser->SetCommon(txtName->Text, txtAdr->Text, cmGen->Text, txtMob->Text);

			bool result = objectUser->dataInsert();

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
private: System::Void AddUser_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
