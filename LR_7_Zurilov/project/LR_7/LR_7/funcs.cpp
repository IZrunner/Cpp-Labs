
// ̳����� ���� �������


#include"iostream"
#include "Fheads.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath> 

using namespace std;





// ��� �������� 1.14.1

 double sample(double x, double y, double Z, double a) {

	 double absolute = abs(y - tan(Z*M_PI / 180)); // ���������� �������� ������
	 

	 double denominator = 0; // ���������
		if (absolute >= 0) {
			denominator = 1 + x*x*absolute;
	 }
		else {
			cout << "Error";
		}


		if (denominator != 0){
		a = ((3 + exp(y - 1)) / denominator) - tan(155 * M_PI / 180);
	}
		else {
			cout << "Error";
		}


		return a;
}





 // ��� �������� 1.14.1

 double sample_1(double x_1, double y_1, double b) {

	double radical = pow(y_1 - x_1, 1.0 / 3.0); // �������� ������ �� ������� �������
		
	double absolute_1 = pow(abs(y_1 - x_1), 3.0); // ��� ������
			
		if (radical != 0 && absolute_1 >= 0) {
			b = 1 + radical + ((y_1 - x_1)*(y_1 - x_1)) / 2 + absolute_1 / 3;
	}
		else {
			cout << "Error";
	}
		return b;
}

 // ��� �������� 2










