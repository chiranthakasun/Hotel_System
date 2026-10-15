#pragma once
#include "CommonUser.h"
#include "databaseConnection.h"

namespace Project1 {

    using namespace::System;
    using namespace ::System::Data;

    public ref class insertGuest : public CommonUser
    {
    public:
        String^ nic;

        void setData(String^ n)
        {
            nic = n;
        }

		bool insertData()
		{
			databaseConnection^ db = gcnew databaseConnection();
			bool isInserted = db->dataInsertGuest(nic, Name, Gender, MobileNo, Address);

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

