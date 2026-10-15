#pragma once

#include "databaseConnection.h"

namespace Project1{

	using namespace System;
	using namespace System::Data;

	public ref class userClass
	{
    private:
        String^ Username;
        String^ Paswword;
		String^ Role = nullptr;

    public:

        property String^ UserRole
        {
            String^ get() { return Role; }
        }

        void setdata(String^ u, String^ p)
        {
            Username = u;
            Paswword = p;
			
        }
        bool checkData()
        {
            bool status = false;

            databaseConnection^ db = gcnew databaseConnection();
            String^ query = "Select username, password, role from staff";

            DataTable^ resultTable = db->ExecuteUserQuery(query);

            for each (DataRow ^ row in resultTable->Rows)
            {
                String^ username = safe_cast<String^>(row["username"]);
                String^ password = safe_cast<String^>(row["password"]);
                String^ role = safe_cast<String^>(row["role"]);

                if (username == Username && password == Paswword)
                {
                    status = true;
                    break;
                }
            }

            return status;
        }
    };
	};


