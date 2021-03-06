// Coffe_Shop_Hack.cpp : Defines the entry point for the console application.
//https://synchronic.uat.edu/courses/1379/assignments/55994
//Assignment 9 C++

#include "stdafx.h"
#include <iostream>

using namespace std;

//Declare the initial function type using traditional variabls
void NormalTransaction(int x, int y);
//call the second transaction type using c++ reference method &
void HackedTransaction(int& x, int& y);
int main()
{
	//Declare the initial values of each balance
	int Hacker_Balance = 150;
	int Coffee_Shop_Balance = 1000;
	//display the balances for the user before any methods are called
	cout << "===========================================================" << endl;
	cout << "Original Balances" << endl;
	cout << "Hacker Balance: " << Hacker_Balance << endl;
	cout << "Coffe Shop Balance: " << Coffee_Shop_Balance << endl;
	cout << "===========================================================" << endl;
	//Display the results from a normal transaction and demonstrate no value change for the balances
	cout << "===========================================================" << endl;
	cout << "Normal Transaction:" << endl;
	NormalTransaction(Hacker_Balance, Coffee_Shop_Balance);
	cout << "Hacker Balance: " << Hacker_Balance << endl;
	cout << "Coffe Shop Balance: " << Coffee_Shop_Balance << endl;
	cout << "===========================================================" << endl;

	//Display the results from the hacked transaction to show how the balances change using the reference method
	cout << "===========================================================" << endl;
	cout << "Hacked Transaction:" << endl;
	HackedTransaction(Hacker_Balance, Coffee_Shop_Balance);
	cout << "Hacker Balance: " << Hacker_Balance << endl;
	cout << "Coffe Shop Balance: " << Coffee_Shop_Balance << endl;
	cout << "===========================================================" << endl;

	system("pause");
	return 0;
}

void NormalTransaction(int Hacker_Balance, int Coffee_Shop_Balance)
{
	//Assign the hacker balance to a temporary variable in the function
	int temp = Hacker_Balance;
	//reassign the values to the coffee shop balance
	Hacker_Balance = Coffee_Shop_Balance;
	//assign the coffee shop balance to the temp variables value
	Coffee_Shop_Balance = temp;
	//this function does not reassign the values.  The values remain fixed.
}
void HackedTransaction(int& Hacker_Balance, int& Coffee_Shop_Balance)
{
	//Assign the hacker balance to a temporary variable in the function
	int temp = Hacker_Balance;
	//reassign the values to the coffee shop balance
	Hacker_Balance = Coffee_Shop_Balance;
	//assign the coffee shop balance to the temp variables value
	Coffee_Shop_Balance = temp;
	//this function does not reassign the values.  The values are changed because of the Reference method &
}
