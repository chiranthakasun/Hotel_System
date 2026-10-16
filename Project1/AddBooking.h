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
	/// Summary for AddBooking
	/// </summary>
	public ref class AddBooking : public System::Windows::Forms::Form
	{
	public:
		AddBooking(void)
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
		~AddBooking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	protected:

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ B;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ txtBdate;
	private: System::Windows::Forms::DateTimePicker^ txtBtime;
	private: System::Windows::Forms::DateTimePicker^ txtCdate;
	private: System::Windows::Forms::DateTimePicker^ txtCout;

	private: System::Windows::Forms::TextBox^ txtStaff;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNic;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtRoomId;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ txtStatus;




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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtBtime = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtCdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtCout = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtStaff = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNic = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtRoomId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::ComboBox());
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
			this->btnAdd->Location = System::Drawing::Point(263, 476);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(214, 48);
			this->btnAdd->TabIndex = 48;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddBooking::btnAdd_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(113, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(176, 29);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Checking Date:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(418, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 29);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Checkout Date:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(105, 293);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 29);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Status :";
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B->Location = System::Drawing::Point(418, 102);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(170, 29);
			this->B->TabIndex = 40;
			this->B->Text = L"Booking Time:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(105, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 29);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Booking Date:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(251, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 32);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Add Reservation";
			// 
			// txtBdate
			// 
			this->txtBdate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBdate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->txtBdate->Location = System::Drawing::Point(110, 143);
			this->txtBdate->Name = L"txtBdate";
			this->txtBdate->ShowUpDown = true;
			this->txtBdate->Size = System::Drawing::Size(200, 27);
			this->txtBdate->TabIndex = 49;
			// 
			// txtBtime
			// 
			this->txtBtime->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBtime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->txtBtime->Location = System::Drawing::Point(423, 143);
			this->txtBtime->Name = L"txtBtime";
			this->txtBtime->ShowUpDown = true;
			this->txtBtime->Size = System::Drawing::Size(200, 27);
			this->txtBtime->TabIndex = 50;
			// 
			// txtCdate
			// 
			this->txtCdate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCdate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->txtCdate->Location = System::Drawing::Point(110, 236);
			this->txtCdate->Name = L"txtCdate";
			this->txtCdate->ShowUpDown = true;
			this->txtCdate->Size = System::Drawing::Size(200, 27);
			this->txtCdate->TabIndex = 51;
			// 
			// txtCout
			// 
			this->txtCout->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCout->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->txtCout->Location = System::Drawing::Point(423, 236);
			this->txtCout->Name = L"txtCout";
			this->txtCout->ShowUpDown = true;
			this->txtCout->Size = System::Drawing::Size(200, 27);
			this->txtCout->TabIndex = 52;
			// 
			// txtStaff
			// 
			this->txtStaff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStaff->Location = System::Drawing::Point(420, 325);
			this->txtStaff->Name = L"txtStaff";
			this->txtStaff->Size = System::Drawing::Size(200, 30);
			this->txtStaff->TabIndex = 55;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(426, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 29);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Staff Id:";
			// 
			// txtNic
			// 
			this->txtNic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNic->Location = System::Drawing::Point(113, 408);
			this->txtNic->Name = L"txtNic";
			this->txtNic->Size = System::Drawing::Size(200, 30);
			this->txtNic->TabIndex = 57;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(111, 376);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 29);
			this->label5->TabIndex = 56;
			this->label5->Text = L"NIC :";
			// 
			// txtRoomId
			// 
			this->txtRoomId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoomId->Location = System::Drawing::Point(420, 408);
			this->txtRoomId->Name = L"txtRoomId";
			this->txtRoomId->Size = System::Drawing::Size(200, 30);
			this->txtRoomId->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(418, 376);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 29);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Room ID:";
			// 
			// txtStatus
			// 
			this->txtStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStatus->FormattingEnabled = true;
			this->txtStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Avialable" });
			this->txtStatus->Location = System::Drawing::Point(110, 325);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(200, 33);
			this->txtStatus->TabIndex = 60;
			// 
			// AddBooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(742, 560);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtRoomId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtNic);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtStaff);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCout);
			this->Controls->Add(this->txtCdate);
			this->Controls->Add(this->txtBtime);
			this->Controls->Add(this->txtBdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->B);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(595, 200);
			this->Name = L"AddBooking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"AddBooking";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if(txtNic->Text == "" || txtRoomId->Text == "" || txtStatus->Text == "" || txtStaff->Text == "" || txtCout->Text == "" || txtCdate->Text == "" || txtBtime->Text == "" || txtBdate->Text == "")
		{
			MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			insertRoom^ insert = gcnew insertRoom();
			insert->SetData(txtBdate->Text, txtBtime->Text, txtCdate->Text, txtCout->Text, txtStatus->Text, txtStaff->Text, txtNic->Text, txtRoomId->Text);
			if (insert->InsertBookingData())
			{
				MessageBox::Show("Booking added successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Failed to add booking", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}
