#pragma once
#include "databaseConnection.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for BookingManagement
	/// </summary>
	public ref class BookingManagement : public System::Windows::Forms::Form
	{
	public:
		BookingManagement(void)
		{
			InitializeComponent();
		}

	protected:
		~BookingManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Panel^ pnlGrid;      // NEW: wrapper that gives the grid its padding
		System::Windows::Forms::Panel^ pnlForm;
		System::Windows::Forms::Panel^ pnlButtons;
		System::Windows::Forms::DataGridView^ dgvBookings;
		System::Windows::Forms::Button^ btnUpdate;
		System::Windows::Forms::Button^ btnDelete;
		System::Windows::Forms::TextBox^ txtBookingId;
		System::Windows::Forms::TextBox^ txtRoomId;
		System::Windows::Forms::TextBox^ txtStaffId;
		System::Windows::Forms::TextBox^ txtNIC;
		System::Windows::Forms::DateTimePicker^ dtpCheckIn;
		System::Windows::Forms::DateTimePicker^ dtpCheckOut;
		System::Windows::Forms::ComboBox^ cmbStatus;
		System::Windows::Forms::Label^ lblBookingId;
		System::Windows::Forms::Label^ lblRoomId;
		System::Windows::Forms::Label^ lblStaffId;
		System::Windows::Forms::Label^ lblNIC;
		System::Windows::Forms::Label^ lblCheckIn;
		System::Windows::Forms::Label^ lblCheckOut;
		System::Windows::Forms::Label^ lblStatus;
		System::ComponentModel::Container^ components;

		databaseConnection^ dbConn;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlGrid = (gcnew System::Windows::Forms::Panel());
			this->pnlForm = (gcnew System::Windows::Forms::Panel());
			this->pnlButtons = (gcnew System::Windows::Forms::Panel());
			this->dgvBookings = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->txtBookingId = (gcnew System::Windows::Forms::TextBox());
			this->txtRoomId = (gcnew System::Windows::Forms::TextBox());
			this->txtStaffId = (gcnew System::Windows::Forms::TextBox());
			this->txtNIC = (gcnew System::Windows::Forms::TextBox());
			this->dtpCheckIn = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpCheckOut = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbStatus = (gcnew System::Windows::Forms::ComboBox());
			this->lblBookingId = (gcnew System::Windows::Forms::Label());
			this->lblRoomId = (gcnew System::Windows::Forms::Label());
			this->lblStaffId = (gcnew System::Windows::Forms::Label());
			this->lblNIC = (gcnew System::Windows::Forms::Label());
			this->lblCheckIn = (gcnew System::Windows::Forms::Label());
			this->lblCheckOut = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookings))->BeginInit();
			this->pnlGrid->SuspendLayout();
			this->pnlForm->SuspendLayout();
			this->pnlButtons->SuspendLayout();
			this->SuspendLayout();

			// lblTitle (top of the form)
			this->lblTitle->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(690, 45);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Booking Management";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			// dgvBookings (Fill inside pnlGrid, so it respects the panel's Padding)
			this->dgvBookings->AllowUserToAddRows = false;
			this->dgvBookings->AllowUserToDeleteRows = false;
			this->dgvBookings->AllowUserToResizeRows = false;
			this->dgvBookings->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvBookings->BackgroundColor = System::Drawing::Color::White;
			this->dgvBookings->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvBookings->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dgvBookings->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(10, 69, 207);
			this->dgvBookings->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->dgvBookings->ColumnHeadersDefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(10, 69, 207);
			this->dgvBookings->ColumnHeadersDefaultCellStyle->SelectionForeColor = System::Drawing::Color::White;
			this->dgvBookings->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBookings->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(19, 31, 176);
			this->dgvBookings->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::White;
			this->dgvBookings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvBookings->EnableHeadersVisualStyles = false;
			this->dgvBookings->MultiSelect = false;
			this->dgvBookings->Name = L"dgvBookings";
			this->dgvBookings->ReadOnly = true;
			this->dgvBookings->RowHeadersVisible = false;
			this->dgvBookings->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvBookings->TabIndex = 0;
			this->dgvBookings->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookingManagement::dgvBookings_CellClick);

			// pnlGrid (wrapper: its Padding is the margin around the grid)
			this->pnlGrid->BackColor = System::Drawing::Color::White;
			this->pnlGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlGrid->Name = L"pnlGrid";
			this->pnlGrid->Padding = System::Windows::Forms::Padding(30, 10, 30, 10);   // left, top, right, bottom
			this->pnlGrid->TabIndex = 1;
			this->pnlGrid->Controls->Add(this->dgvBookings);

			// pnlForm (detail fields, docked to bottom above the buttons)
			this->pnlForm->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlForm->Name = L"pnlForm";
			this->pnlForm->BackColor = System::Drawing::Color::White;
			this->pnlForm->Size = System::Drawing::Size(690, 130);
			this->pnlForm->TabIndex = 2;

			// pnlButtons (docked to very bottom)
			this->pnlButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlButtons->Name = L"pnlButtons";
			this->pnlButtons->BackColor = System::Drawing::Color::White;
			this->pnlButtons->Size = System::Drawing::Size(690, 70);
			this->pnlButtons->TabIndex = 3;

			// lblBookingId
			this->lblBookingId->AutoSize = true;
			this->lblBookingId->Location = System::Drawing::Point(24, 12);
			this->lblBookingId->Name = L"lblBookingId";
			this->lblBookingId->TabIndex = 1;
			this->lblBookingId->Text = L"Reservation ID:";

			// lblRoomId
			this->lblRoomId->AutoSize = true;
			this->lblRoomId->Location = System::Drawing::Point(24, 42);
			this->lblRoomId->Name = L"lblRoomId";
			this->lblRoomId->TabIndex = 2;
			this->lblRoomId->Text = L"Room No:";

			// lblStaffId
			this->lblStaffId->AutoSize = true;
			this->lblStaffId->Location = System::Drawing::Point(24, 72);
			this->lblStaffId->Name = L"lblStaffId";
			this->lblStaffId->TabIndex = 3;
			this->lblStaffId->Text = L"Staff ID:";

			// lblNIC
			this->lblNIC->AutoSize = true;
			this->lblNIC->Location = System::Drawing::Point(24, 102);
			this->lblNIC->Name = L"lblNIC";
			this->lblNIC->TabIndex = 4;
			this->lblNIC->Text = L"NIC:";

			// lblCheckIn
			this->lblCheckIn->AutoSize = true;
			this->lblCheckIn->Location = System::Drawing::Point(300, 12);
			this->lblCheckIn->Name = L"lblCheckIn";
			this->lblCheckIn->TabIndex = 5;
			this->lblCheckIn->Text = L"Check-In:";

			// lblCheckOut
			this->lblCheckOut->AutoSize = true;
			this->lblCheckOut->Location = System::Drawing::Point(300, 42);
			this->lblCheckOut->Name = L"lblCheckOut";
			this->lblCheckOut->TabIndex = 6;
			this->lblCheckOut->Text = L"Check-Out:";

			// lblStatus
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(300, 72);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->TabIndex = 7;
			this->lblStatus->Text = L"Status:";

			// txtBookingId
			this->txtBookingId->Location = System::Drawing::Point(120, 12);
			this->txtBookingId->Name = L"txtBookingId";
			this->txtBookingId->ReadOnly = true;
			this->txtBookingId->Size = System::Drawing::Size(130, 20);
			this->txtBookingId->TabIndex = 8;

			// txtRoomId
			this->txtRoomId->Location = System::Drawing::Point(120, 42);
			this->txtRoomId->Name = L"txtRoomId";
			this->txtRoomId->Size = System::Drawing::Size(130, 20);
			this->txtRoomId->TabIndex = 9;

			// txtStaffId
			this->txtStaffId->Location = System::Drawing::Point(120, 72);
			this->txtStaffId->Name = L"txtStaffId";
			this->txtStaffId->Size = System::Drawing::Size(130, 20);
			this->txtStaffId->TabIndex = 10;

			// txtNIC
			this->txtNIC->Location = System::Drawing::Point(120, 102);
			this->txtNIC->Name = L"txtNIC";
			this->txtNIC->Size = System::Drawing::Size(130, 20);
			this->txtNIC->TabIndex = 11;

			// dtpCheckIn
			this->dtpCheckIn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpCheckIn->Location = System::Drawing::Point(380, 12);
			this->dtpCheckIn->Name = L"dtpCheckIn";
			this->dtpCheckIn->Size = System::Drawing::Size(150, 20);
			this->dtpCheckIn->TabIndex = 12;

			// dtpCheckOut
			this->dtpCheckOut->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpCheckOut->Location = System::Drawing::Point(380, 42);
			this->dtpCheckOut->Name = L"dtpCheckOut";
			this->dtpCheckOut->Size = System::Drawing::Size(150, 20);
			this->dtpCheckOut->TabIndex = 13;

			// cmbStatus
			this->cmbStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatus->FormattingEnabled = true;
			this->cmbStatus->MaxDropDownItems = 5;
			this->cmbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Pending", L"Confirmed", L"Checked-In", L"Checked-Out", L"Cancelled" });
			this->cmbStatus->Location = System::Drawing::Point(380, 72);
			this->cmbStatus->Name = L"cmbStatus";
			this->cmbStatus->Size = System::Drawing::Size(150, 21);
			this->cmbStatus->TabIndex = 14;

			// Buttons: Update, Delete (200 x 34, flat, blue), centered as a pair in the 576 px wide form:
			// (576 - (200 + 20 + 200)) / 2 = 78
			// btnUpdate
			this->btnUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(10, 69, 207);
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(15, 24, 136);
			this->btnUpdate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(19, 31, 176);
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(78, 11);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(200, 34);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &BookingManagement::btnUpdate_Click);

			// btnDelete
			this->btnDelete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(10, 69, 207);
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(15, 24, 136);
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(19, 31, 176);
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(298, 11);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(200, 34);
			this->btnDelete->TabIndex = 16;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &BookingManagement::btnDelete_Click);

			// Add controls to the form panel
			this->pnlForm->Controls->Add(this->lblBookingId);
			this->pnlForm->Controls->Add(this->lblRoomId);
			this->pnlForm->Controls->Add(this->lblStaffId);
			this->pnlForm->Controls->Add(this->lblNIC);
			this->pnlForm->Controls->Add(this->lblCheckIn);
			this->pnlForm->Controls->Add(this->lblCheckOut);
			this->pnlForm->Controls->Add(this->lblStatus);
			this->pnlForm->Controls->Add(this->txtBookingId);
			this->pnlForm->Controls->Add(this->txtRoomId);
			this->pnlForm->Controls->Add(this->txtStaffId);
			this->pnlForm->Controls->Add(this->txtNIC);
			this->pnlForm->Controls->Add(this->dtpCheckIn);
			this->pnlForm->Controls->Add(this->dtpCheckOut);
			this->pnlForm->Controls->Add(this->cmbStatus);

			// Add buttons to the button panel
			this->pnlButtons->Controls->Add(this->btnUpdate);
			this->pnlButtons->Controls->Add(this->btnDelete);

			// BookingManagement (form)
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ClientSize = System::Drawing::Size(576, 481);
			this->Location = System::Drawing::Point(595, 182);
			this->Name = L"BookingManagement";
			this->Size = System::Drawing::Size(576, 481);
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Booking Management";
			this->Load += gcnew System::EventHandler(this, &BookingManagement::BookingManagement_Load);

			// Order matters for docking: Fill first, then bottom panels, then top label
			this->Controls->Add(this->pnlGrid);      // wrapper panel (contains dgvBookings)
			this->Controls->Add(this->pnlForm);
			this->Controls->Add(this->pnlButtons);
			this->Controls->Add(this->lblTitle);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookings))->EndInit();
			this->pnlGrid->ResumeLayout(false);
			this->pnlForm->ResumeLayout(false);
			this->pnlForm->PerformLayout();
			this->pnlButtons->ResumeLayout(false);
			this->ResumeLayout(false);
		}
#pragma endregion

	private:
		void BookingManagement_Load(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				dbConn = gcnew databaseConnection();
				LoadAllBookings();
				cmbStatus->SelectedIndex = 0;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Database connection error: " + ex->Message);
			}
		}

		void LoadAllBookings()
		{
			try
			{
				String^ query = "SELECT reservation_id, room_no, staff_id, NIC, check_in_date, check_out_date, status FROM reservation";
				DataTable^ dt = dbConn->ExecuteUserQuery(query);

				dgvBookings->DataSource = dt;
				dgvBookings->Columns[0]->HeaderText = "Reservation ID";
				dgvBookings->Columns[1]->HeaderText = "Room No";
				dgvBookings->Columns[2]->HeaderText = "Staff ID";
				dgvBookings->Columns[3]->HeaderText = "Customer NIC";
				dgvBookings->Columns[4]->HeaderText = "Check-In";
				dgvBookings->Columns[5]->HeaderText = "Check-Out";
				dgvBookings->Columns[6]->HeaderText = "Status";

				// Keep columns filling the grid width after the data source is set
				dgvBookings->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error loading bookings: " + ex->Message);
			}
		}

		void ClearForm()
		{
			txtBookingId->Clear();
			txtRoomId->Clear();
			txtStaffId->Clear();
			txtNIC->Clear();
			dtpCheckIn->Value = DateTime::Now;
			dtpCheckOut->Value = DateTime::Now;
			cmbStatus->SelectedIndex = 0;
		}

		void dgvBookings_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (e->RowIndex >= 0)
			{
				DataGridViewRow^ row = dgvBookings->Rows[e->RowIndex];

				txtBookingId->Text = Convert::ToString(row->Cells[0]->Value);
				txtRoomId->Text = Convert::ToString(row->Cells[1]->Value);
				txtStaffId->Text = Convert::ToString(row->Cells[2]->Value);
				txtNIC->Text = Convert::ToString(row->Cells[3]->Value);

				if (row->Cells[4]->Value != nullptr && row->Cells[4]->Value != DBNull::Value)
					dtpCheckIn->Value = Convert::ToDateTime(row->Cells[4]->Value);
				if (row->Cells[5]->Value != nullptr && row->Cells[5]->Value != DBNull::Value)
					dtpCheckOut->Value = Convert::ToDateTime(row->Cells[5]->Value);

				cmbStatus->Text = Convert::ToString(row->Cells[6]->Value);
			}
		}

		void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				if (String::IsNullOrEmpty(txtBookingId->Text))
				{
					MessageBox::Show("Please select a booking to update");
					return;
				}

				int roomNo, staffId, reservationId;
				if (!Int32::TryParse(txtRoomId->Text, roomNo) ||
					!Int32::TryParse(txtStaffId->Text, staffId) ||
					!Int32::TryParse(txtBookingId->Text, reservationId))
				{
					MessageBox::Show("Room No and Staff ID must be valid numbers");
					return;
				}

				if (String::IsNullOrEmpty(txtNIC->Text))
				{
					MessageBox::Show("Please enter the customer NIC");
					return;
				}

				if (dtpCheckOut->Value.Date < dtpCheckIn->Value.Date)
				{
					MessageBox::Show("Check-Out date cannot be before Check-In date");
					return;
				}

				String^ query = String::Format(
					"UPDATE reservation SET room_no={0}, staff_id={1}, NIC='{2}', check_in_date='{3}', check_out_date='{4}', status='{5}' WHERE reservation_id={6}",
					roomNo,
					staffId,
					txtNIC->Text->Replace("'", "''"),
					dtpCheckIn->Value.ToString("yyyy-MM-dd"),
					dtpCheckOut->Value.ToString("yyyy-MM-dd"),
					cmbStatus->Text->Replace("'", "''"),
					reservationId
				);

				dbConn->ExecuteUserQuery(query);
				MessageBox::Show("Booking updated successfully");
				LoadAllBookings();
				ClearForm();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error updating booking: " + ex->Message);
			}
		}

		void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				if (String::IsNullOrEmpty(txtBookingId->Text))
				{
					MessageBox::Show("Please select a booking to delete");
					return;
				}

				int reservationId;
				if (!Int32::TryParse(txtBookingId->Text, reservationId))
				{
					MessageBox::Show("Invalid Reservation ID");
					return;
				}

				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this booking?", "Confirm Delete", System::Windows::Forms::MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					String^ query = String::Format("DELETE FROM reservation WHERE reservation_id={0}", reservationId);
					dbConn->ExecuteUserQuery(query);
					MessageBox::Show("Booking deleted successfully");
					LoadAllBookings();
					ClearForm();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error deleting booking: " + ex->Message);
			}
		}
	};
}