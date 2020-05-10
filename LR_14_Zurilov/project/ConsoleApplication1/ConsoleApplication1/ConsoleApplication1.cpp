// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


struct BookStore
{
	char title[1000];
	int amount;
	int price;
};


using namespace std;

int main()
{
	/*

	Написати програму, що реалізує книжковий магазин.
	Кожна структура містить поля: назва книги, кількість примірників, ціна.
	Реалізувати виведення всієї інформації про книги, пошук книги за назвою.
	Реалізувати пошук за ціною із зазначенням інтервалу можливої ціни (повинна бути
	виведена інформація про книги, ціни яких потрапляють у зазначений інтервал).

	*/

	int i = 0;
	const int amountOfBooks = 5; // Кількість книжок
	char c[250]; // Для алфавітного пошуку
	int p_2, lPRICE; // p_2 - Ціна, нижче якої мають книжки у магазині, 

	BookStore library[amountOfBooks];

	ifstream BSList;
	BSList.open("BSList.txt");

	while (BSList >> library[i].title >> library[i].amount >> library[i].price &&  i < amountOfBooks) // Зчитування данних з файлу
	{
		cout << library[i].title << " " << library[i].amount << " " << library[i].price << " " << endl;
		i++;
	}


	cout << " " << endl;
	cout << " " << endl;


	cout << "Enter first char of title ";
	cin >> c;

	for (i = 0; i < amountOfBooks; i++) // Пошук за алфавітом
	{

		if (strspn(library[i].title, c) != 0)
		{
			cout << "Title is " << library[i].title << endl;
			break;
		}

		else cout << "Not found";
	}

	cout << " " << endl;
	cout << " " << endl;


	cout << "Enter range of price ";
	cin >> p_2;


	lPRICE = library[0].price; // Плчаткова найнижча ціна на книжки

	for (i = 0; i < amountOfBooks; i++) // Пошук за ціною
	{
		if (lPRICE <= p_2)
		{
			cout << library[i].title << " " << library[i].amount << " " << library[i].price << " " << endl;
			lPRICE = library[i + 1].price;
		}
		else {
			lPRICE = library[i + 1].price;
			continue;
		}
	}


	system("pause");

	return 0;
}