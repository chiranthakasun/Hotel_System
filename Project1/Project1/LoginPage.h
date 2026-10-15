#pragma once

#include "databaseConnection.h"
#include "userClass.h"
#include "AdminPage.h"
#include "ReceptionPage.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Button^ btnLogin;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginPage::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(558, 646);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->Location = System::Drawing::Point(673, 176);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(177, 32);
			this->lblUser->TabIndex = 1;
			this->lblUser->Text = L"User Name : ";
			// 
			// txtUser
			// 
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUser->Location = System::Drawing::Point(669, 224);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(314, 34);
			this->txtUser->TabIndex = 2;
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPass->Location = System::Drawing::Point(673, 288);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(153, 32);
			this->lblPass->TabIndex = 3;
			this->lblPass->Text = L"Password :";
			// 
			// txtPass
			// 
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPass->Location = System::Drawing::Point(669, 338);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(314, 34);
			this->txtPass->TabIndex = 3;
			this->txtPass->UseSystemPasswordChar = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::Window;
			this->btnLogin->Location = System::Drawing::Point(669, 413);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(314, 51);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginPage::btnLogin_Click);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1082, 640);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"LoginPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginPage";
			this->Load += gcnew System::EventHandler(this, &LoginPage::LoginPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtUser->Text == "" || txtPass->Text == "")
		{
			MessageBox::Show("User Name or Passowrd Empty", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
		else
		{
			userClass^ userObject = gcnew userClass();
			userObject->setdata(txtUser->Text,txtPass->Text);
			
			if (userObject->checkData())
			{
				//MessageBox::Show("Login Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				String^ role = userObject->UserRole;

				
				AdminPage^ newScreen = gcnew AdminPage();
				newScreen->setUsername(txtUser->Text);
				newScreen->Show();
				this->Hide();
				
				
				
				
				
			}
			else
			{
				MessageBox::Show("Invalid Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void LoginPage_Load(System::Object^ sender, System::EventArgs^ e) {

		//databaseConnection^ db = gcnew databaseConnection();
		//String^ query = "Select version()";
		//String^ result = safe_cast<String^>(db->ExecuteUserQuery(query));
		//label1->Text = result;
		

	};

	};
	
};
