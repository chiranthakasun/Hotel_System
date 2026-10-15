#pragma once

#include "AddGuest.h"
#include "AddRoom.h"
#include "AddBooking.h"
#include "BookingManagement.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReceptionPage
	/// </summary>
	public ref class ReceptionPage : public System::Windows::Forms::Form
	{
	private:
		String^ currentUsername;
	
	public:
		ReceptionPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void setUsername(String^ username)
		{
			currentUsername = username;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReceptionPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ blnLogOut;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnAdBook;

	private: System::Windows::Forms::Button^ btnAdguest;

	private: System::Windows::Forms::Label^ lgUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->blnLogOut = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAdBook = (gcnew System::Windows::Forms::Button());
			this->btnAdguest = (gcnew System::Windows::Forms::Button());
			this->lgUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->Controls->Add(this->blnLogOut);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnAdBook);
			this->panel1->Controls->Add(this->btnAdguest);
			this->panel1->Controls->Add(this->lgUser);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(308, 597);
			this->panel1->TabIndex = 3;
			// 
			// blnLogOut
			// 
			this->blnLogOut->BackColor = System::Drawing::Color::Brown;
			this->blnLogOut->FlatAppearance->BorderSize = 0;
			this->blnLogOut->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			this->blnLogOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkRed;
			this->blnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->blnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blnLogOut->ForeColor = System::Drawing::Color::White;
			this->blnLogOut->Location = System::Drawing::Point(47, 516);
			this->blnLogOut->Name = L"blnLogOut";
			this->blnLogOut->Size = System::Drawing::Size(208, 42);
			this->blnLogOut->TabIndex = 9;
			this->blnLogOut->Text = L"Logout";
			this->blnLogOut->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 55);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Manage Booking";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btnAdBook
			// 
			this->btnAdBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->btnAdBook->FlatAppearance->BorderSize = 0;
			this->btnAdBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdBook->ForeColor = System::Drawing::Color::White;
			this->btnAdBook->Location = System::Drawing::Point(-2, 270);
			this->btnAdBook->Name = L"btnAdBook";
			this->btnAdBook->Size = System::Drawing::Size(308, 55);
			this->btnAdBook->TabIndex = 6;
			this->btnAdBook->Text = L"Add New Booking";
			this->btnAdBook->UseVisualStyleBackColor = false;
			// 
			// btnAdguest
			// 
			this->btnAdguest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->btnAdguest->FlatAppearance->BorderSize = 0;
			this->btnAdguest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdguest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdguest->ForeColor = System::Drawing::Color::White;
			this->btnAdguest->Location = System::Drawing::Point(1, 211);
			this->btnAdguest->Name = L"btnAdguest";
			this->btnAdguest->Size = System::Drawing::Size(308, 55);
			this->btnAdguest->TabIndex = 4;
			this->btnAdguest->Text = L"Add New Guest";
			this->btnAdguest->UseVisualStyleBackColor = false;
			// 
			// lgUser
			// 
			this->lgUser->AutoSize = true;
			this->lgUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lgUser->ForeColor = System::Drawing::Color::White;
			this->lgUser->Location = System::Drawing::Point(100, 75);
			this->lgUser->Name = L"lgUser";
			this->lgUser->Size = System::Drawing::Size(115, 25);
			this->lgUser->TabIndex = 2;
			this->lgUser->Text = L"User Name ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(110, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(572, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 69);
			this->label3->TabIndex = 5;
			this->label3->Text = L"INNVEX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(525, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(375, 69);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Welcome To";
			// 
			// ReceptionPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1076, 595);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"ReceptionPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReceptionPage";
			this->Load += gcnew System::EventHandler(this, &ReceptionPage::ReceptionPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReceptionPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdnUser_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
