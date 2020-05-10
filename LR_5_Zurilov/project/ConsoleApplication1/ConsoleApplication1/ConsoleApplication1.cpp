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


	/*


	// Цикл while, де поч. х = 1, кінцеве = 3, s - крок за х = 0.2

	double Y, x = 1.0, s = 0.2;
	
	while (x < 3.2) {
		Y = cos(x * M_PI / 180) + log10(x) - exp(x);
		cout << "Y = " << Y << " x = " << x << endl;
		x += s;
	}


	*/


	// Цикл do while, де поч. х = 1, кінцеве = 3, s - крок за х = 0.2

	double Y, x = 1.0, s = 0.2;

	do {
		Y = cos(x * M_PI / 180) + log10(x) - exp(x);
		cout << "Y = " << Y << " x = " << x << endl;
		x += s;
	} while (x < 3.2);


	system("pause");

    return 0;
}

