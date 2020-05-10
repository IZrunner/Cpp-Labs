// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>


struct session // Данні про сессію
{
	char number[6]; // Номер групи
	char SecondName[100]; // Прізвище студента
	int exam[3]; // Оцінки за екзамени 1, 2, 3
};

 
using namespace std;

int main()
{
	/*
	
	Створити масив структур, який містить відомості про сесію. 
	Кожна структура містить поля - номер (наприклад ЕС-101), прізвище студента, 
	оцінки за трьома іспитами. Написати програму, яка видає наступну інформацію: 
	прізвища невстигаючих студентів групи Х, із зазначенням кількості заборгованостей; 
	кількість невстигаючих студентів групи Х. Найменування групи Х вводиться за запитом з клавіатури.

	*/

	
	int min_note, counterOfFails = 0; // min_note - мінімальний допустимий бал; counterOfFails - кількість заборгованостей
	const int amountOfStudents = 3, n = 3; // Кількість студентів
	session students[amountOfStudents] = {}; // Массив структур


	cout << "Enter minimal note : ";
	cin >> min_note;

	cout << " " << endl;
	cout << " " << endl;

	for (int i = 0; i < amountOfStudents; i++) // Ввід даних про студентів / заповнення структури данними
	{
		cout << "Enter number of student's group : ";
		cin >> students[i].number;

		cout << "Enter second name : ";
		cin >> students[i].SecondName;

		cout << "Enter note of exam 1 : ";
		cin >> students[i].exam[0];

		cout << "Enter note of exam 2 : ";
		cin >> students[i].exam[1];

		cout << "Enter note of exam 3 : ";
		cin >> students[i].exam[2];

		cout << " " << endl;
		cout << " " << endl;

		cin.get();

	}


	 

	for (int i = 0; i < amountOfStudents; i++) { // і - номер студента

	for (int j = 0; j < n; j++) { // Лічильник поганих оцінок студентів 

		if (students[i].exam[j] < min_note) // exam[j] - бал за екзамен
		{
			counterOfFails++; continue; 
		}	
	}		
		cout << students[i].SecondName << "is a not-in-progress student \n";
		cout << "Amount of fails is " << counterOfFails << "\n ";
		counterOfFails = 0;
	}

		
	system("pause");

    return 0;
}