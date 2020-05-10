
// Містить виклики функцій

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "iomanip"
#include "Fheads.h"

using namespace std;
int main()
{

	// 1.14.1

	
	double a = 0, x, y, Z, answ = 0;

		cout << "Input x y and Z : " << endl;
		cin >> x >> y >> Z;

	answ = sample(x, y, Z, a);
		cout << "a is " << answ << endl;


	// 1.14.2

	double y_1, x_1, b = 0, rez = 0;

		cout << "Input x_1 and y_1 : " << endl;
		cin >> x_1 >> y_1;

	rez = sample_1(x_1, y_1, b);
		cout << "b is " << rez << endl;


	// 2

		
		












	system("pause");

	return 0;
}
