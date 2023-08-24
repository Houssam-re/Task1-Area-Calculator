#pragma once
#include <iostream>
#include "clsScreen.h"
#include "Library/clsInputValidation.h"

class clsAreaSquareCalculator : protected clsScreen
{

	static double _ReadTheSideLength()
	{
		cout << "Enter Ther Side Length of Square :  ";
		return clsInputValidate::ReadNumber <double>();
	}
	static void PrintResult(double Result)
	 {
		 cout << "\n\t The Result is : " << Result<<endl<<endl;
	 }
	 static void Calcule()
	{
		char Answer;
		do
		{
			double SideLength = _ReadTheSideLength();
			double Result = SideLength * SideLength;
			PrintResult(Result);
			cout << "Do You Want To Calcule Another Area Square ? y/n ";
			cin >> Answer;
		} while (towlower(Answer)== 'y');
	}
public:
	static void ShowAreaSquareScreen()
	{
		DrawTheHeader("Area Square Calculator ");
		Calcule();
		
	}
};

