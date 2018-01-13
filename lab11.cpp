#include "stdafx.h"
#include <iostream>
#include <math.h>

#define PI 3.14159265 // Define pi

using namespace std;


class mymath
{

public:
	int x;
	int y;
public:
	mymath();
	mymath(int a, int b);
	int mysum(int v1, int v2);
	int mydiv(int v1, int v2);
	double mysum(double v1, double v2);

	double calculate_hyp(double v1, double v2);
	double calculate_asin(double v1, double v2);
	double calculate_acos(double v1, double v2);
	double calculate_atan(double v1, double v2);
	double rads_to_deg(double radians);
	double deg_to_rads(double deg);
};

// top level

int main()
{
	mymath bill;
	mymath jim(4, 3);

	int res = bill.mysum(10, 5);
	cout << res << endl;
	cout << jim.x << endl;

	/*
	Let's test our functions!
	*/
	double myhyp = bill.calculate_hyp(26, 15);
	cout << "Given a = 26, and b = 15 , the length of hypotenuse is " << myhyp << endl;

	double mysin = bill.calculate_asin(80, 214);
	cout << "Given Opposite=80 and Hypotenuse=214 our asin = " << mysin << " deg" << endl;

	double mycos = bill.calculate_acos(26, 30);
	cout << "Given Adjacent=26 and Hypotenuse=30 our acos = " << mycos << " deg" << endl;

	double mytan = bill.calculate_atan(15, 26);
	cout << "Given Opposite=15 and Adjacent=26 our acos = " << mytan << " deg" << endl;

	system("pause");
	return 0;
}


// class implementation

mymath::mymath()
{
	x = 0;
	y = 0;
}

mymath::mymath(int a, int b)
{
	x = a;
	y = b;
}

/*
Converts Radians to Degrees
*/
double mymath::rads_to_deg(double radians)
{
	return radians * 180 / PI;
}

/*
Converts Degress to Radians
*/
double mymath::deg_to_rads(double deg)
{
	return deg * PI / 180.0;
}

/*
Calculates Inverse of sin and returns degrees
*/
double mymath::calculate_asin(double v1, double v2)
{
	return mymath::rads_to_deg(asin(v1 / v2));
}

/*
Calculates Inverse of cos and returns degrees
*/
double mymath::calculate_acos(double v1, double v2)
{
	return mymath::rads_to_deg(acos(v1 / v2));
}

/*
Calculates Inverse of tan and returns degrees
*/
double mymath::calculate_atan(double v1, double v2)
{
	return mymath::rads_to_deg(atan(v1 / v2));
}

/*
Calculates length of hypotenuse given sides a and b (or v1 and v2 in this case)
c = √(a2 + b2)
*/
double mymath::calculate_hyp(double v1, double v2)
{
	return sqrt(pow(v1, 2) + pow(v2, 2));
}

int mymath::mysum(int v1, int v2)
{
	return v1 + v2;
}

double mymath::mysum(double v1, double v2)
{
	return v1 + v2;
}


int mymath::mydiv(int v1, int v2)
{
	return v1 / v2;
}