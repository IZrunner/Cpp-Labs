// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <cstdlib>

using namespace std;
int main()
{
	// Сума
	
	
	/*


	double Y, x, sum = 0;

	cout << "Input x: ";
	cin >> x;
	

	for (int i = 1; i < 11; i++) {
		sum += log10(i*x); 
	}
	cout << "Sum is : " << sum << endl;

	Y = (cos(x*M_PI / 180) + sum) / (x*x) + 2;
	
	cout << "Y is : " << Y << endl;


	*/




	


	// Добуток

	double Z, x, sum1 = 0, sum2 = 0;

	cout << "Input x : ";
	cin >> x;

	for (int n = 1; n < 6; n++) {
		sum1 += n * M_PI;
		sum2 += tan(n*x);
	}
	cout << "Sum of PI = " << sum1 << endl;

	cout << "Sum of tg = " << sum2 << endl;

	Z = sum1 * sum2;

	cout << "Z = " << Z << endl;

	

	system("pause");

    return 0;
}

