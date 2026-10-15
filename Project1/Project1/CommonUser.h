#pragma once
namespace Project1 {

	using namespace ::System;
	

	public ref class CommonUser
	{
	public:
		String^ Name;
		String^ Address;
		String^ Gender;
		String^ MobileNo;

		void SetCommon(String^ n, String^ a, String^ g, String^ m)
		{
			Name = n;
			Address = a;
			Gender = g;
			MobileNo = m;
		}

		

	};
}

