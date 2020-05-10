// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


using namespace std;

int main()
{

	/*

	9.	Створіть файл, що містить масив дійсних чисел.
	Напишіть програму, що визначає кількість чисел,
	менших середнього арифметичного значення всіх чисел масиву.

	*/

	const int n = 5; // Розмірність масиву
	double TestArr[n], average = 0, least = 0; // average - середнє арифметичне, least - кількість елементів, менших за average
	int i = 0; // Лічильник масиву


	ifstream WFObject;

	WFObject.open("TestWorkFile.txt"); // Відкриття файлу



	while (WFObject >> TestArr[i] && i < n) // Зчитування данних з файлу
	{
		cout << TestArr[i] << " ";
		i++;
	}


	for (i = 0; i < n; i++) // Середнє арифметичне
	{
		average += TestArr[i];
	}

	average = average / n;
	cout << "\nAverage in array is " << average << "\n";


	for (i = 0; i < n; i++) // Кількість елементів, менших за середнє арифметичне
	{
		if (TestArr[i] < average)
		{
			least++;
		}
		else continue;
	}

	cout << "Amount of indexes less than average are " << least << endl;


	system("pause");

	return 0;
}