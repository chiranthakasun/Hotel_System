#pragma once
#include "CommonUser.h"
#include "databaseConnection.h"
namespace Project1 {

	using namespace::System;
	using namespace ::System::Data;

	public ref class insertUser : public CommonUser

	{
	public:
		String^ userName;
		String^ passWord;
		String^ Role;

		void setData(String^ u, String^ p, String^ r)
		{
			userName = u;
			passWord = p;
			Role = r;
		}

		bool dataInsert()
		{
			databaseConnection^ db = gcnew databaseConnection();
			bool isInserted = db->insertUser(userName,passWord,Name,Gender,MobileNo,Address,Role);

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

