// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>


using namespace std;


int main()
{

	/*

	9. Задано цілочисельний масив А розміру N (≤ 15). 
	Переписати в новий цілочисельний масив всі елементи з порядковими номерами, 
	кратними трьом (3, 6, ...), і вивести розмір отриманого масиву С і його вміст. 
	Умовний оператор не використовувати. 

	*/
	

	const int N = 15; // N - size of array A; N - size of array C (indexes of array A, that divide by 3 without a remainder)
	int A[N], C[N], x, j = 0; // x - variables that user inputs 


	for (int i = 0; i < N; i++) // Initializing array using keyboard
	{
		cout << "Enter variable :";
		cin >> x;

		A[i] = x;
	}

	
		cout << "\nYour array A is : \n";
	for (int i = 0; i < N; i++) // Outputing the array
	{
		cout << A[i] << " ";
	}

		cout << "\nYour array is : \n";
	for (int i = 0; i < 15; i+=3) // Array C of the array A elements, A[i] % 3 == 0
	{
	C[i] = A[i];

		cout << " \n " << C[i] ;
	}


		cout << " \n ";


	system("pause");

    return 0;
}