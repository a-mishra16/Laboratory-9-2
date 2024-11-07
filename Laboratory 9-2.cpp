/*
* Project: Laboratory 9-2
* Author: Aanika Mishra
* Date: 11-7-2024
* Description:This program intakes 6 integers one at a time and tells if they are in ascending order, 
* descending order or if there are adjacent duplicates or any duplicates in general
*/

#include <iostream>
#include <iomanip>

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

using namespace std;

int main()
{
	const int length = 6;
	int input;
	int inputs[length];

	for (int i = 0; i < length; i++)
	{
		cout << "Enter integer #" << i << ": ";
		cin >> input;

		inputs[i] = input;
	}

	if (isSortedIncreasing(inputs, length) == true)
	{
		cout << "The data are increasing." << endl;
	}
	else
	{
		cout << "The data are not increasing." << endl;
	}

	if (isSortedDecreasing(inputs, length) == true)
	{
		cout << "The data are decreasing." << endl;
	}
	else
	{
		cout << "The data are not decreasing." << endl;
	}
}

bool isSortedIncreasing(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] < values[i + 1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool isSortedDecreasing(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] > values[i + 1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}