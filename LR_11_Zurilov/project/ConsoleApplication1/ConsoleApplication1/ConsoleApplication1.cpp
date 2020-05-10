// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <string.h>
#include <cstdio>
#include <cstring>


using namespace std;


int main()
{
	/*
	
	9.	Дано рядки S1 і S2. Видалити з рядка S1 перший підрядок, що збігається з S2.
	Якщо співпадаючих підрядків немає, то вивести рядок S1 без змін.
	
	*/


	char s1[256], s2[256];
	char *buf; // Вказівник для ф-ції strstr
	int i, j;

	cout << "Enter 1: ";
	gets_s(s1);
	cout << "Enter 2: ";
	gets_s(s2);
	buf = strstr(s1, s2); // Шукаємо перше входження S2 в S1
	if (buf) // Якщо умова дійсна
	{
		for (i = 0; i < strlen(s2); i++) // Видаляємо S2 з S1
			for (j = 0; j < strlen(s1); j++)
				buf[j] = buf[j + 1]; 
	}
	cout << s1; // Або без змін, або змінений рядок S2


	system ("pause");

    return 0;
}