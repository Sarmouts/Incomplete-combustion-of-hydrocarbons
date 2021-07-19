// AteleisKafseis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		int CO, a, c, h;
		double o;
		cout << "Choose to proin ths atelhs kafshs 1. CO, 2. C " << endl;
		cin >> CO;
		if (CO == 1)
		{

			cout << "Choose ton desmo tvn carbons 1. single, 2. double, 3. triple " << endl;
			cin >> a;
			if (a == 1)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 0)
				{
					cout << "Please enter a valid value " << endl;
				}

				else {
					h = 2 * c + 2;
					o = (h / 2 + c) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO" << endl;
				}


			}
			else if (a == 2)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
				}
				else {
					h = 2 * c;
					o = (h / 2 + c) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO" << endl;
				}
			}
			else if (a == 3)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
				}
				else {
					h = 2 * c - 2;
					o = (h / 2 + c) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO" << endl;
				}
			}







		}
		else if (CO == 2)
		{

			cout << "Choose ton desmo tvn carbons 1. single, 2. double, 3. triple " << endl;
			cin >> a;
			if (a == 1)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 0)
				{
					cout << "Please enter a valid value " << endl;
				}
				else {
					h = 2 * c + 2;
					o = (h / 2) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "C" << endl;
				}


			}
			else if (a == 2)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
				}
				else {
					h = 2 * c;
					o = (h / 2) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "C" << endl;
				}
			}
			else if (a == 3)
			{

				cout << "Enter the number of carbons " << endl;
				cin >> c;
				if (c <= 1)
				{
					cout << "Please enter a valid value " << endl;
				}
				else {
					h = 2 * c - 2;
					o = (h / 2) / 2;
					cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "C" << endl;
				}
			}


		}


	}
}
