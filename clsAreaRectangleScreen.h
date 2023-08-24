#pragma once
#include <iostream>
#include "clsScreen.h"
#include "Library/clsInputValidation.h"

class clsAreaRectangleScreen : protected clsScreen
{
	static double _ReadTheLength()
	{
		cout << "Enter Ther Side Length of Rectangle  :  ";
		return clsInputValidate::ReadNumber <double>();
	}	
	
	static double _ReadTheWidth()
	{
		cout << "Enter Ther Side Width of Rectangle  :  ";
		return clsInputValidate::ReadNumber <double>();
	}
	static void PrintResult(double Result)
	{
		cout << "\n\t The Result is : "  << Result << endl << endl;
	}
	static void Calcule()
	{
		char Answer;
		do
		{
			double Length = _ReadTheLength();
			double Width  = _ReadTheWidth();
			double Result = Length * Width;
			PrintResult(Result);
			cout << "Do You Want To Calcule Another Area Rectangle ? y/n ";
			cin >> Answer;
		} while (towlower(Answer) == 'y');
	}
public:
	static void ShowAreaRectangleScreen()
	{
		DrawTheHeader(" Area Rectangle Calculator ");
		Calcule();

	}
};

