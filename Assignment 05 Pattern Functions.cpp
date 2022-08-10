// Patterns with Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void diamond(int size, char symbol);
void ladder(int size, int rungs, char symbol);
void nepalflag(int size, char symbol);
void hourglass(int size, char symbol);

int main()
{
	int choice, length;
	char symb, option;
	do
	{
		cout << "Select one of the following choices :" << endl;
		cout << "Enter '1' for displaying an hourglass pattern" << endl;
		cout << "Enter '2' for displaying a diamond pattern" << endl;
		cout << "Enter '3' for displaying the Nepal flag" << endl;
		cout << "Enter '4' for displaying the ladder pattern" << endl;
		cout << "Enter your Choice : ";
		cin >> choice;

		while (choice <= 0 || choice > 4)
		{
			cout << "*****The Choice should be one of following*****" << endl;
			cout << "Enter '1' for displaying an hourglass pattern" << endl;
			cout << "Enter '2' for displaying a diamond pattern" << endl;
			cout << "Enter '3' for displaying the Nepal flag" << endl;
			cout << "Enter '4' for displaying the ladder pattern" << endl;
			cout << "Enter your Choice again : ";
			cin >> choice;
		}
		cout << "Enter the Symbol for Pattern  : ";
		cin >> symb;


		switch (choice)
		{
		case 1:
			cout << "Enter the size of the Pattern : ";
			cin >> length;
			while (length < 0 || length % 2 == 0)
			{
				cout << "*****The size should be positive odd Number*****" << endl;
				cout << "Enter the size of the Pattern again : ";
				cin >> length;
			}
			hourglass(length, symb);
			break;

		case 2:
			cout << "Enter the size of the Pattern : ";
			cin >> length;
			while (length < 0 || length % 2 == 0)
			{
				cout << "*****The size should be positive odd Number*****" << endl;
				cout << "Enter the size of the Pattern again : ";
				cin >> length;
			}
			diamond(length, symb);
			break;
		case 3:
			cout << "Enter the size of the Pattern : ";
			cin >> length;
			while (length < 0 || length == 0)
			{
				cout << "*****The size should be positive *****" << endl;
				cout << "Enter the size of the Pattern again : ";
				cin >> length;
			}
			nepalflag(length, symb);
			break;

		case 4:
			cout << "Enter the size of the Pattern : ";
			cin >> length;
			while (length < 0 || length == 0)
			{
				cout << "*****The size should be positive *****" << endl;
				cout << "Enter the size of the Pattern again : ";
				cin >> length;
			}
			int rngs;
			cout << "Enter the number of Rungs : ";
			cin >> rngs;
			while (rngs < 0 || rngs == 0)
			{
				cout << "*****The  Number of Rungs should be positive *****" << endl;
				cout << "Enter the number of rungs again : ";
				cin >> rngs;
			}
			ladder(length, rngs, symb);
			break;
		}
		cout << endl;
		cout << "*****If you want to run the Program again*****" << endl;
		cout << "Press y otherwise n : ";
		cin >> option;

	} while (option == 'Y' || option == 'y');



}

void diamond(int size, char symbol)
{
	int i, s, k;
	for (i = 1; i <= size; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		for (s = i; s <= size; s++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << symbol << " ";
		}
		cout << endl;

	}
	for (i = size; i > 0; i--)
	{
		if (i == size)
		{
			continue;
		}

		if (i % 2 == 0)
		{
			continue;
		}
		for (s = 0; s <= size - i; s++)
		{
			cout << " ";
		}
		for (k = i; k > 0; k--)
		{
			cout << symbol << " ";
		}
		cout << endl;
	}

}


void ladder(int size, int rungs, char symbol)
{
	int r, i, s;

	for (r = 1; r <= rungs; r++)
	{

		for (i = 1; i <= size; i++)
		{
			cout << symbol;

		}
		cout << endl;
		for (i = 1; i <= size; i++)
		{
			cout << symbol;
			for (s = 1; s <= size - 2; s++)

			{
				cout << " ";
			}
			cout << symbol;
			cout << endl;
		}

	}
	for (i = 1; i <= size; i++)
	{
		cout << symbol;

	}


}
void nepalflag(int size, char symbol)
{
	int z, ns, i, j, t;

	for (z = 1; z <= 2; z++)
	{
		if (z == 2)
		{
			i = 2;
		}
		else
		{
			i = 1;
		}
		for (; i <= size; i++)
		{

			for (ns = 1; ns <= i; ns++)
			{

				cout << symbol << " ";
			}
			cout << endl;
		}
		for (j = 1; j < size; j++)
		{
			for (t = 1; t <= size - j; t++)
			{
				cout << symbol << " ";
			}
			cout << endl;
		}

	}

}
void hourglass(int size, char symbol)
{
	int i, s, k;
	for (i = size; i > 0; i--)
	{

		if (i % 2 == 0)
		{
			continue;
		}
		for (s = 0; s <= size - i; s++)
		{
			cout << " ";
		}
		for (k = i; k > 0; k--)
		{
			cout << symbol << " ";
		}
		cout << endl;
	}
	for (i = 1; i <= size; i++)
	{
		if (i == 1)
		{
			continue;
		}
		if (i % 2 == 0)
		{
			continue;
		}
		for (s = i; s <= size; s++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << symbol << " ";
		}
		cout << endl;

	}
}





