// AteleisKafseis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string replace(int c)
{
	string str = "";
	if (c != 1)
	{
		str += to_string(c);
	}
	return str;
}
int main()
{
	cout << "Welcome to MathFlare's c++ incomplete hydrocarbon combustion calculator" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	while (true)
	{
		int CO, a, c;
		double o, h;
		cout << "Choose to proin ths atelhs kafshs 1. CO, 2. C " << endl;
		cin >> CO;
		if (CO == 1)
		{
			cout << "Choose the bond type of the carbons 1. single, 2. double, 3. triple" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 0)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c + 2;
					o = (h / 2 + c) / 2;
					if (round(o) != o)
					{
						cout << "H" << h << "C" << replace(c) << " + " << o * 2 << "/2O2 --> " << h / 2 << "H2O + " << replace(c) << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << h << "C" << replace(c) << " + " << o << "O2 --> " << h / 2 << "H2O + " << replace(c) << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
			else if (a == 2)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c;
					o = (h / 2 + c) / 2;
					if (round(o) != o)
					{
						cout << "H" << h << "C" << c << " + " << o * 2 << "/2O2 --> " << h / 2 << "H2O + " << c << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
			else if (a == 3)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c - 2;
					o = (h / 2 + c) / 2;
					if (round(o) != o)
					{
						cout << "H" << h << "C" << c << " + " << o * 2 << "/2O2 --> " << replace(h / 2) << "H2O + " << c << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << h << "C" << c << " + " << o << "O2 --> " << replace(h / 2) << "H2O + " << c << "CO" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
		}
		else if (CO == 2)
		{
			cout << "Choose the bond type of the carbons 1. single, 2. double, 3. triple " << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 0)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c + 2;
					o = (h / 2) / 2;
					if (round(o) != o)
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << o * 2 << "/2O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << replace(o) << "O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
			else if (a == 2)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c;
					o = (h / 2) / 2;
					if (round(o) != o)
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << o * 2 << "/2O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << replace(o) << "O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
			else if (a == 3)
			{
				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
					cout << "===========================================================================================" << endl;
				}
				else {
					h = 2 * c - 2;
					o = (h / 2) / 2;
					if (round(o) != o)
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << o * 2 << "/2O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
					else
					{
						cout << "H" << replace(h) << "C" << replace(c) << " + " << replace(o) << "O2 --> " << replace(h / 2) << "H2O + " << replace(c) << "C" << endl;
						cout << "===========================================================================================" << endl;
					}
				}
			}
		}
	}
}
