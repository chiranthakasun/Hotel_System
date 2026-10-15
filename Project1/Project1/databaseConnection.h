#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;

	public ref class databaseConnection
	{
	private:
		String^ connString;

	public:

		databaseConnection()
		{
			connString = "Server=localhost; Port=3306; Database=hotel_management; Uid=root; pwd=2003";

		}

		DataTable^ ExecuteUserQuery(String^ userQuery)
		{
			DataTable^ dt = gcnew DataTable();
			MySqlConnection^ conn = gcnew MySqlConnection(connString);
			//MySqlDataReader^ result = nullptr;

			try
			{
				conn->Open();

				MySqlCommand^ cmd = gcnew MySqlCommand(userQuery, conn);
				
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				adapter->Fill(dt);

			}

			catch (MySqlException^ ex)
			{
				Console::WriteLine("MySQL Error: {0}", ex->Message);
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("General Error: {0}", ex->Message);
			}
			finally
			{
				// Always ensure the connection closes safely
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
			}

			return dt;

			
		}

		bool insertUser(String^ username, String^ password, String^ name, String^ gender, String^ mobile_number, String^ address, String^ role)
		{
			MySqlConnection^ conn = gcnew MySqlConnection(connString);
			String^ query = "INSERT INTO staff (username, password, name, gender, mobile_number, address, role) VALUES (@username, @password, @name, @gender, @mobile_number, @address, @role)";

			bool success = false;

			try
			{
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

				// Add parameters securely
				cmd->Parameters->AddWithValue("@username", username);
				cmd->Parameters->AddWithValue("@password", password);
				cmd->Parameters->AddWithValue("@name", name);
				cmd->Parameters->AddWithValue("@gender", gender);
				cmd->Parameters->AddWithValue("@mobile_number", mobile_number);
				cmd->Parameters->AddWithValue("@address", address);
				cmd->Parameters->AddWithValue("@role", role);

				// ExecuteNonQuery is used for INSERT, UPDATE, DELETE queries
				int rowsAffected = cmd->ExecuteNonQuery();
				if (rowsAffected > 0)
				{
					success = true;
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Insert Error: {0}", ex->Message);
			}
			finally
			{
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
			}

			return success;
		}

		bool dataInsertGuest(String^ nic, String^ name, String^ gender, String^ mobile_number, String^ address)
		{
			MySqlConnection^ conn = gcnew MySqlConnection(connString);
			String^ query = "INSERT INTO guest (nic, name, gender, mobile_number, address) VALUES (@nic, @name, @gender, @mobile_number, @address)";

			bool success = false;

			try
			{
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

				// Add parameters securely
				cmd->Parameters->AddWithValue("@nic", nic);
				cmd->Parameters->AddWithValue("@name", name);
				cmd->Parameters->AddWithValue("@gender", gender);
				cmd->Parameters->AddWithValue("@mobile_number", mobile_number);
				cmd->Parameters->AddWithValue("@address", address);

				// ExecuteNonQuery is used for INSERT, UPDATE, DELETE queries
				int rowsAffected = cmd->ExecuteNonQuery();
				if (rowsAffected > 0)
				{
					success = true;
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Insert Error: {0}", ex->Message);
			}
			finally
			{
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
			}

			return success;
		}

		bool dataInsertRom(int^ room_no, String^ room_type, float^ price, int^ no_of_beds, String^ ac_or_non_ac, bool^ outdoor_bathroom, bool^ attach_bathroom, String^ status)
		{
			MySqlConnection^ conn = gcnew MySqlConnection(connString);
			String^ query = "INSERT INTO room (room_no, room_type, price, no_of_beds, ac_or_non_ac, outdoor_bathroom, attach_bathroom, status) VALUES (@room_no, @room_type, @price, @no_of_beds, @ac_or_non_ac, @outdoor_bathroom, @attach_bathroom, @status)";

			bool success = false;

			try
			{
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

				// Add parameters securely
				cmd->Parameters->AddWithValue("@room_no", room_no);
				cmd->Parameters->AddWithValue("@room_type", room_type);
				cmd->Parameters->AddWithValue("@price", price);
				cmd->Parameters->AddWithValue("@no_of_beds", no_of_beds);
				cmd->Parameters->AddWithValue("@ac_or_non_ac", ac_or_non_ac);
				cmd->Parameters->AddWithValue("@outdoor_bathroom", outdoor_bathroom);
				cmd->Parameters->AddWithValue("@attach_bathroom", attach_bathroom);
				cmd->Parameters->AddWithValue("@status", status);

				// ExecuteNonQuery is used for INSERT, UPDATE, DELETE queries
				int rowsAffected = cmd->ExecuteNonQuery();
				if (rowsAffected > 0)
				{
					success = true;
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Insert Error: {0}", ex->Message);
			}
			finally
			{
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
			}

			return success;
		}

		bool dataInsertBooking(DateTime^ booking_date, DateTime^ booking_time, DateTime^ checkin_date, DateTime^ checkout_date, String^ status, int^ staff_id, String^ nic, int^ room_no)
		{
			MySqlConnection^ conn = gcnew MySqlConnection(connString);
			String^ query = "INSERT INTO reservation (booking_date, booking_time, check_in_date, check_out_date, status, staff_id, nic, room_no) VALUES (@booking_date, @booking_time, @checkin_date, @checkout_date, @status, @staff_id, @nic, @room_no)";
			bool success = false;
			try
			{
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				// Add parameters securely
				cmd->Parameters->AddWithValue("@booking_date", booking_date);
				cmd->Parameters->AddWithValue("@booking_time", booking_time);
				cmd->Parameters->AddWithValue("@checkin_date", checkin_date);
				cmd->Parameters->AddWithValue("@checkout_date", checkout_date);
				cmd->Parameters->AddWithValue("@status", status);
				cmd->Parameters->AddWithValue("@staff_id", staff_id);
				cmd->Parameters->AddWithValue("@nic", nic);
				cmd->Parameters->AddWithValue("@room_no", room_no);
				// ExecuteNonQuery is used for INSERT, UPDATE, DELETE queries
				int rowsAffected = cmd->ExecuteNonQuery();
				if (rowsAffected > 0)
				{
					success = true;
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Insert Error: {0}", ex->Message);
			}
			finally
			{
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
			}
			return success;
		}
		

	};



}

