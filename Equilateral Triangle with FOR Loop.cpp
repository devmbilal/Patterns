// Equilateral Triangle with FOR Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char st;  // stars
	int n, nl, s;  /* n is total number of lines, nl is the line number and
				   s is spaces on the wright hand*/
	cout << "Enter a number for lines of Triangle =";
	cin >> n;
	for (nl = 1; nl <= n; nl++)
	{
		for (s = n - nl; s > 0; s--)
		{
			cout << " ";
		}
		for (st = 1; st <= nl; st++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
