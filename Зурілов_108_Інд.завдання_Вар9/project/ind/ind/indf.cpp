	// ���� ��������� �-���

	#include "stdafx.h"
	#include <iostream>
	#include <cmath>
	#include <vector>
	#include <fstream>
	#include <time.h>
	#include <cstring>
	#include "ind_.h" // ���� ��������� �-���

	using namespace std; 


	const double PI = 3.14;


	// �������� 1 


	double exercise_1A(int w_1, double x_1, double z_1, double v_1)
	{
		double A_1;


		if (
		3*sqrt (x_1) >= 0 &&	// ���������� ����� �� ���� ���� ��'�����
		( abs (x_1 - pow(z_1, 3.0/2)) - 15*x_1*x_1 ) != 0 &&	// ��������� �� ������� 0
		2*v_1 != 0 &&	// ��������� �� ������� 0
		pow (1 / 2 * v_1, 1.0/4) >= 0 &&	// ������ ����� �� ���� ���� ��'�����
		sqrt (x_1) >= 0 &&	// ���������� ����� �� ���� ���� ��'�����
		1 - sqrt (x_1) !=0 &&	 // ��������� �� ������� 0
		sqrt(2*w_1) != 0	// ���������� ����� �� ���� ���� ��'�����
		)

		{
		A_1 = ( 1 + 3 * sqrt(x_1) ) / (abs(x_1 - pow(z_1, 3.0 / 2)) - 15 * x_1 * x_1)
		+ 1 / (( ( pow(1 / 2 * v_1, 1.0 / 4) + sqrt (4 * w_1 * w_1) / 1 - sqrt(x_1) )
		- sqrt(2 * w_1) ) );
		}

		else 
		{
		cout << "You've got a false variable";
		}


		return A_1;
	}


	double exercise_1B(int w_1, int y_1, double x_1, double z_1, double v_1)
	{
		double B_1;


		if (
		x_1*w_1 + z_1 != 0 &&	// ��������� �� ������� 0
		w_1 != 0 &&		// ��������� �� ������� 0
		3*v_1 + y_1 != 0	// ��������� �� ������� 0
		)
		
		{
		B_1 = ( 1 / x_1*w_1 + z_1 ) + ( ( pow(x_1, 5) * y_1 ) / w_1 ) 
		+ abs(17 * x_1 * y_1) + ( ( z_1 / 3 * v_1 + y_1 ) * pow(10, 5) * y_1 );
		}

		else
		{
		cout << "Some variable(s) is(are) wrong";
		}


		return B_1;
	}


	double exercise_1C(int alpha_1, int beta_1)
	{
		double C_1;


		C_1 = (pow(cos(3 * alpha_1), 2) * cos(beta_1))
			- 3 * pow((sin((30 * PI / 180) - 3 * alpha_1)), 3)
			+ sin(7 * beta_1); 


		return C_1;
	}


	// ----------------------------------------------------


	// �������� 2 


	double exercise_2(double a_1, double b_1, double x_1)
	{
		double y;


		if (x_1 <= a_1)
		{
		cout << "There was used condition 1" << endl;
		y = pow( ( cos(x_1) + sin (x_1) ) , cos(2 * x_1) );
		}
		
		else if (x_1 > a_1 && x_1 < b_1)
		{
		cout << "There was used condition 2" << endl;
		y = 11.3 + 3.3 * cos (3.6 * x_1 - PI/4);
		}

		else
		{
		cout << "There was used condition 3" << endl;
		y = 2.8 * log10(3 * x_1) + 8 * pow(x_1, 3.1) + 4.3 * pow(x_1, 2.7) + 1.1;
		}


		return y;
	}


	// ----------------------------------------------------


	//�������� 3 
	
	
	int indCounter = 0; // ������ ��. ����. �������
	double average, sumOfEl = 0, diff; // diff - ������ �� R �� ������ 2 ����. ��. �������

	void exercise_3(double R_1) // default �� case 1 ����������, �� ������ ���� R; ������ ������������ �����������
	{

	vector <double> arr(20);
	
	cout << "\nArray by the rule : A[i] = i^3 + 11*i - (i - 3)(i + 4) is ";
	for (int i = 0; i < arr.size(); i++) 
	{
		arr[i] = (i*i*i) + 11*i - (i - 3)*(i + 4);
		cout << arr[i] << " ";
	}

	
	ofstream example("ex3.txt");


	// ��������� �������� �������� ������, ���� ������

	double min = arr[0];

	for (int i = 0; i < arr.size(); i++)
	{

	if(arr[i] < min)
	{
	min = arr[i];
	indCounter++;
	}

	}

	cout << "\nThe least element of the array is " << min << ". \nIt's index is " << indCounter << endl;
	example << "\nThe least element of the array is " << min << ". \nIt's index is " << indCounter << endl;


	// ��������� ������������������� �������� �������� ������

	for (int i = 0; i < arr.size(); i++)
	{
	sumOfEl += arr[i];
	}

	average = sumOfEl / arr.size();
	cout << "\nAverage of array elements is " << average << endl;
	example << "\nAverage of array elements is " << average << endl;

	example.close();

	}


	// ---------------------------------------------------------------


	void exercise_3_1(double R_1)
	{

	vector <double> arr1(5);

	ofstream example("ex3.txt");

	cout << "\nEnter your variables : ";
	for (int i = 0; i < arr1.size(); i++)
	{
		cin >> arr1[i];
		cout << " ";
	}


	// ��������� ��� ������ �������� ������, ���� ���� ������� ������� �� ����� R


	for (int i = 0; i < arr1.size(); i++)
	{
	diff = R_1 - (arr1[i] + arr1[i + 1]);
	if (diff > 0 && diff <= 5)
	{
	cout << "\nSum of " << i << " and " << i+1 << " is close to R" << endl;
	example << "\nSum of " << i << " and " << i+1 << " is close to R" << endl;
	}
	}

	example.close();

	}


	// ---------------------------------------------------------------


	void exercise_3_2(double R_1)
	{

	vector <double> arr2(5);

	ofstream example("ex3.txt");

	srand(time(NULL));

	cout << "\nEnter your variables : ";
	for (int i = 0; i < arr2.size(); i++)
	{
	arr2[i] = rand() % 20 - 0;;
	cout << arr2[i] << " ";
	}


	// ��������� ��� ������ �������� ������, ���� ���� ������� ������� �� ����� R


	for (int i = 0; i < arr2.size(); i++)
	{
	diff = R_1 - (arr2[i] + arr2[i + 1]);
	if (diff > 0 && diff <= 5)
	{
	cout << "\nSum of " << i << " and " << i + 1 << " is close to R" << endl;
	example << "\nSum of " << i << " and " << i + 1 << " is close to R" << endl;
	}
	}

	example.close();

	}



	// ----------------------------------------------------


	//�������� 4


	void exercise_4()
	{
	
	char s1[100], s2[100];

	ifstream file1("file1.txt"); ifstream file2("file2.txt"); ofstream file3("file3.txt");

	file1 >> s1;
	cout << s1 << endl;

	file2 >> s2;
	cout << s2 << endl;

	strcat_s(s1, s2);
	cout << s1;

	file3 << s1;

	file1.close(); file2.close(); file3.close();

	}