// LR3Zurilov108.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
//#define _USE_MATH_DEFINES
#include "math.h"
#include <cstdlib>
using namespace std;
int main()
{
	//3.9.1 Дано тризначне число.Використовуючи одну операцію ділення націло, вивести першу цифру цього числа(сотні).
	
	int a, b;
	double x;
	// a - тризначне число, b - перша цифра

		cout << "Input a, a must consist of 3 numbers: ";
		cin >> a;


	b = (a - (a % 100))/100;

		cout << "The first number (hundreds) is " << b << endl;

		cout<<char(b)<<endl; // Перетворення типу в стилі мови С
	
		x = static_cast<double>(b); // Перетворення типу в стилі мови С++




	//_____________________________________________________________________________________________________________________________________________________________________________





	//3.9.2.1

	//double m, t, c, a;
	// m, c - коефіцієнти, t - градусна міра, a - результат

		/*
		printf_s("Inp m :");
		scanf_s("%lf", &m);

		printf_s("Inp t :");
		scanf_s("%lf", &t);

		printf_s("Inp c :");
		scanf_s("%lf", &c);
	
		a = pow((m*tan(t*M_PI / 180)) + abs(c*sin(t*M_PI / 180)), 3.) + sin(92 * M_PI / 180);
	
		printf_s("a is %f", a);
		
		*/


		//3.9.2.2
	/*
	double x, y, b;

	printf_s("Inp x :");
	scanf_s("%lf", &x);

	printf_s("Inp y :");
	scanf_s("%lf", &y);

	
	b = sqrt((abs(x - y)) / x + 8 * pow(y, 2)) - pow(pow(x, 5) + x*y / pow((3 + y), 2) + exp(5 * y), 3);

	printf_s("b is %lf ", b);
	
	*/








	system("pause");

    return 0;
}

