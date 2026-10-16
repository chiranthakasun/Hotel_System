#pragma once
#include "databaseConnection.h"	

namespace Project1 {

	using namespace::System;
	using namespace System::Data;	
	using namespace System::Collections;
	

	public ref class insertRoom
	{

		private:
			int^ RoomNo;
			String^ RoomType;
			float^ Price;
			int^ noOfBeds;	
			String^ AirCondition;
			String^ status;
			bool^ outDoor;
			bool^ atachedBathroom;

			DateTime^ booking_date;
			DateTime^ booking_time;
			DateTime^ checkin_date;	
			DateTime^ checkout_date;
			String^ Sec_status;
			int^ staff_id;
			String^ NIC;
			int^ room_no;


		public:

		void SetData(String^ r, String^ rt, String^ p, int^ n, String^ ac, String^ s, String^ od, String^ ab)
		{

			RoomNo = safe_cast<int^>(System::Int32::Parse(r));
			RoomType = rt;
			Price = safe_cast<float^>(static_cast<float>(System::Double::Parse(p)));
			noOfBeds = n;
			AirCondition = ac;
			status = s;
			outDoor = safe_cast<bool^>(System::Boolean::Parse(od));
			atachedBathroom = safe_cast<bool^>(System::Boolean::Parse(ab));
		}

		void SetData(String^ bd, String^ bt, String^ cd, String^ co, String^ s, String^ sid, String^ nic, String^ rn)
		{
			booking_date = DateTime::Parse(bd);
			booking_time = DateTime::Parse(bt);
			checkin_date = DateTime::Parse(cd);
			checkout_date = DateTime::Parse(co);
			status = s;
			staff_id = safe_cast<int^>(System::Int32::Parse(sid));
			NIC = nic;
			room_no = safe_cast<int^>(System::Int32::Parse(rn));
		}

		bool InsertData()
		{
			databaseConnection^ db = gcnew databaseConnection();
			bool isInserted = db->dataInsertRom(RoomNo, RoomType, Price, noOfBeds, AirCondition, outDoor, atachedBathroom, status);

			if (isInserted)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool InsertBookingData()
		{
			databaseConnection^ db = gcnew databaseConnection();
			bool isInserted = db->dataInsertBooking(booking_date, booking_time, checkin_date, checkout_date, Sec_status, staff_id, NIC, room_no);
			if (isInserted)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

	};
}

