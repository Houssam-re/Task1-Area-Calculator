#pragma once
#include <iostream>
#include <iomanip>
#include "Library/clsInputValidation.h"
#include "clsScreen.h"
#include "clsAreaSquareCalculator.h"
#include "clsAreaRectangleScreen.h"
#include "clsAreaCircleScreen.h"
using namespace std;
class clsMainMenu : protected clsScreen
{

	enum enAreaCalculator {eSquare  = 1 , eRectangle = 2 , eCircle = 3 , eShutDown = 4};
    static  int ReadTheChoice()
    {
        cout << "Enter Your Choice Between [1--4] :  ";
        return clsInputValidate::ReadNumberBetween(1, 4, "Please Enter Number In Range,,,");
    }
    static  void _GoBackToMainMeneu()
    {
        cout << "\n\nPress Any Key To Go Back ...\n\n";
        system("pause>0");
        ShowMainMenuCalculator();
    }
    static  void ShowCalculeAreaSquareScreen()
    {
        clsAreaSquareCalculator::ShowAreaSquareScreen();
    }
    static   void ShowCalculeAreaRectangleScreen()
    {
        clsAreaRectangleScreen::ShowAreaRectangleScreen();
    }
    static void ShowCalculeAreaCircleScreen()
    {
        clsAreaCircleScreen::ShowAreaCircleScreen();
    }
    static   void _PerformChoice(enAreaCalculator Choice)
    {
        switch (Choice)
        {
        case clsMainMenu::eSquare:
            system("cls");
            ShowCalculeAreaSquareScreen();
            _GoBackToMainMeneu();
            break;
        case clsMainMenu::eRectangle:
            system("cls");
            ShowCalculeAreaRectangleScreen();
            _GoBackToMainMeneu();
            break;
        case clsMainMenu::eCircle:
            system("cls");
            ShowCalculeAreaCircleScreen();
            _GoBackToMainMeneu();
            break;
        case clsMainMenu::eShutDown:
            break;
        default:
            break;
        }
    }
public:
    static void ShowMainMenuCalculator()
	{
        system("cls");
		DrawTheHeader(" Area Calculator ");
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Calcule Area of Square.\n";
        cout << setw(37) << left << "" << "\t[2] Calcule Area of Rectangle.\n";
        cout << setw(37) << left << "" << "\t[3] Calcule Area of Circle.\n";
        cout << setw(37) << left << "" << "\t[4] ShutDown.\n";
        cout << setw(37) << left << "" << "===========================================\n";
        _PerformChoice((enAreaCalculator)ReadTheChoice());
	}
};

