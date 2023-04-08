// Sheet5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//problem 4 
//See functions after main
int average_array(int[], int);
int max_array(int[], int);
int min_array(int[], int);
int med_array(int[], int);
void sort_array(int[], int);
void mod_array(int[], int);

//problem 6 
double pol(int[], int, int);


int main()
{

	/*
	//Problem 2
	double x[] = { 10.0, 15.0, 6.0, 5.0, 20.0, 0.0, 1.5, 2.5 };
	int i = 3;
	double y;
	y = x[i] + 1; 
	cout << y << endl; 
	y = x[i + 1]; 
	cout << y << endl; 
	y = x[i / 2]; 
	cout << y << endl; 
	y = x[i] / 2; 
	cout << y << endl; 
	y = x[i * 2]; 
	cout << y << endl; 
	y = x[int(x[i])];
	cout << y << endl;
	*/

	/*
	//problem 3 
	//a
	int x[8] = { 14 , -45 , 67 , 23 , -56 , 34 , 24 , -56 };
	for (int i = 4; i < 7; i++) 
		x[i] = x[i + 1];
	//the following loop is added to print the array elements
	for (int i = 0; i < sizeof(x) / sizeof(int); i++)
		cout << x[i] << "\t";
	cout << endl;
	//b
	int x[8] = { 14 , -45 , 67 , 23 , -56 , 34 , 24 , -56 };
	for (int i = 5; i > 1; i--) 
		x[i] = x[i + 1];
	for (int i = 0; i < sizeof(x) / sizeof(int); i++)
		cout << x[i] << "\t";
	cout << endl;
	*/

	/*
	 //problem 4 using the functions
	int x[5] = { 12, 10, 11, 15, 16 };
	cout <<"Average of array is: " << average_array(x, 5) << endl;
	cout << "Maximum of array is: " << max_array(x, 5) << endl;
	cout << "Minimum of array is: " << min_array(x, 5) << endl;
	cout << "Median of array is: " << med_array(x, 5) << endl;
	cout << "Sorting array in ascending order\n";
	sort_array(x, 5);
	cout << "Sorting array in descedning order\n";
	sort_array(x, 5);
	mod_array(x, 5);
	*/

	//problem 5
	//later

	/*
	//problem 6
	int x[5] = { 12, 10, 11, 15, 16 };
	cout << pol(x, 5, 2) << endl;
	*/

	/*
	//problem 7
	const int size = 250;
	int data[size];
	mod_array(data, size);
	int first_occ = size;
	int last_occ = size;

	for(int i = 0; i < size; i++)
	{ 
		if (data[i] == 12)
		{
			first_occ = i;
			cout << "First occurrence is element: " << first_occ + 1 << endl;
			break;
		}
	}
	if (first_occ == size)
		cout << "The number 12 is not found\n";
	else 
	{
		for (int i = size - 1; i > first_occ; i--)
		{
			if (data[i] == 12)
			{
				last_occ = i;
				cout << "Last occurrence is element: " << last_occ + 1 << endl;
				break;
			}
		}
		if (last_occ == size)
			cout << "The first occurrence is also the last one\n";
	}
	*/

	/*
	//problem 8 
	int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp;
	for (int i = 0; i < 10/2; i++)
	{
		temp = x[i];
		x[i] = x[9 - i];
		x[9 - i] = temp;
	}
	//to print array after reverse
	for (int i = 0; i < 10; i++)
		cout << x[i] << "\t";
	cout << endl;
	*/
	
	/*
	//problem 9 
	const int size = 100;
	int fib[size];
	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < size; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < size; i++)
		cout << fib[i] << "\t";
	cout << endl;
	*/
}

int average_array(int arr[], int array_size)
{
	int sum = 0;
	for (int i = 0; i < array_size; i++)
		sum += arr[i];
	return sum / array_size;
}

int max_array(int arr[], int array_size)
{
	int max = arr[0];
	for (int i = 1; i < array_size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int min_array(int arr[], int array_size)
{
	int min = arr[0];
	for (int i = 1; i < array_size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int med_array(int arr[], int array_size)
{
	if (array_size % 2 != 0)
		return arr[array_size / 2];
	else
		return (arr[array_size / 2] + arr[(array_size / 2) - 1]) / 2;
}

void sort_array(int arr[], int array_size)
{
	cout << "How to sort the array?\n"
		<< "1: Ascending \n"
		<< "2: Descending \n";
	int x;
	cin >> x;
	int temp;
	switch (x)
	{
	case 1:
		for (int i = 0; i < array_size; i++)
		{
			for (int j = i + 1; j < array_size; j++)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}

			}
		}
		cout << "Array in Ascending order: \n";
		for (int i = 0; i < array_size; i++)
			cout << arr[i] << "\t";
		cout << endl;
		break;
	case 2:
		for (int i = 0; i < array_size; i++)
		{
			for (int j = i + 1; j < array_size; j++)
			{
				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}

			}
		}
		cout << "Array in Descending order: \n";
		for (int i = 0; i < array_size; i++)
			cout << arr[i] << "\t";
		cout << endl;
		break;
	}
}

void mod_array(int arr[], int array_size)
{
	cout << "Insert elements of array of size " << array_size << "\n";
	for (int i = 0; i < array_size; i++)
		cin >> arr[i];
	cout << "Array after modification: \n";
	for (int i = 0; i < array_size; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

double pol(int arr[], int array_size, int x)
{
	double sum = 0.0;
	for (int i = 0; i < array_size; i++)
	{
		sum += arr[i] * pow(x, i);
	}
	return sum;
}