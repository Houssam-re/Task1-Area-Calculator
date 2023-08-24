#pragma once
#include <iostream>
#include "clsScreen.h"
#include "Library/clsInputValidation.h"

const double pi = 3.14;

class clsAreaCircleScreen : protected clsScreen
{
	
	static double _ReadTheRadius()
	{
		cout << "Enter The Radius  :  ";
		return clsInputValidate::ReadNumber <double>();
	}
	static void PrintResult(double Result)
	{
		cout << "\n\t The Result is : " << Result << endl << endl;
	}
	static void Calcule()
	{
		char Answer;
		do
		{
			double Radius = _ReadTheRadius();
			double Result = pow(Radius,2) * pi;
			PrintResult(Result);
			cout << "Do You Want To Calcule Another Area Circle ? y/n ";
			cin >> Answer;
		} while (towlower(Answer) == 'y');
	}

public:
	static void ShowAreaCircleScreen()
	{
		DrawTheHeader(" Area Circle Calculator ");
		Calcule();
	}
};

