// Diamond with FOR loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char st;
	int n, nl, s;

	cout << "Enter a number for lines of Triangle =";
	cin >> n;
	for (nl = 1; nl <= n; nl++)
	{
		if (n % 2 == 0)
		{
			continue;
		}

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
	for (nl = n; nl > 0; nl--)
	{
		for (s = n - nl; s > 0; s--)
		{
			cout << " ";
		}
		for (st = nl; st > 0; st--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}


