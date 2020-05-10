// ЛР4Зурілов108.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
#include <cstdlib>
using namespace std;

int main()
{


	double a, c, x, F;

	cout << "Inp a, c, x :";
	cin >> a >> c >> x;

	


	if ( (x >= 0 || x <= 0) && c < 0 && a != 0) {
			F = -a*pow(x,2);
			cout << "F = " << F << endl;
		}

		else if ( (c > 0 || a == 0) && x != 0 && c != 0) {
			F = (a - x) / c*x;
			cout << "F = " << F << endl;
		}

		else if (c < 0 && a != 0 && c != 0 && (x <= 0 || x >= 0) ){
			F = x / c;
			cout << "F = " << F << endl;
		}
	}

	default {
		cout << "Something's wrong\n";
	}
			
	
	



	// Ф-я switch; 
	//9.	Написати алгоритм знаходження числа днів у місяці, якщо дані: 
	//Номер місяця n - ціле число а, що дорівнює 1 для високосного року і дорівнює 0 у противному разі. 

	/*
	int n, a;
	// вис. рік - 366 днів, 29 днів у лютому, у інших - незмінно
	// невис. рік - 365 днів

	cout << "Inp 1 for a leap-year and 0 for a normal one : ";
	cin >> a;
	cout << "Inp a month : ";
	cin >> n;
	if (a == 1) {
		switch (n)
		{
		case 1: cout << "31"; break;
		case 2: cout << "29"; break;
		case 3: cout << "31"; break;
		case 4: cout << "30"; break;
		case 5: cout << "31"; break;
		case 6: cout << "30"; break;
		case 7: cout << "31"; break;
		case 8: cout << "31"; break;
		case 9: cout << "30"; break;
		case 10: cout << "31"; break;
		case 11: cout << "30"; break;
		case 12: cout << "31"; break;
		}
	}
	else {
		switch (n) {
		case 1: cout << "31"; break;
		case 2: cout << "28"; break;
		case 3: cout << "31"; break;
		case 4: cout << "30"; break;
		case 5: cout << "31"; break;
		case 6: cout << "30"; break;
		case 7: cout << "31"; break;
		case 8: cout << "31"; break;
		case 9: cout << "30"; break;
		case 10: cout << "31"; break;
		case 11: cout << "30"; break;
		case 12: cout << "31"; break;
		}
	}
	*/


	system("pause");

    return 0;
}

