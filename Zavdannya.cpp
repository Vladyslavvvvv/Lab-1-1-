#include "pch.h"
#include "Zavdannya.h"
#include "Math.h"

using namespace std;

void Zavdannya::F_B(double N)
{
	double x = 0.48 * N;
	double y = 0.47 * N;
	double z = -1.32 * N;
	b = pow(cos(atan((pow(x, 3) + y) / (1 + pow(fabs(z), 0.5)))), 2) + y * exp(-((3 * z - y) / (z + x)));
}

void Zavdannya::F_A(double N)
{
	double x = 0.48 * N;
	double y = 0.47 * N;
	double z = -1.32 * N;
	a = (1 + (sqrt(pow(pow(sin(fabs(x + y)), 2), 0.3)))) / (0.3 + pow(b, 2) + pow(pow(sin(fabs(z)), 2), 1.3)) + tan((3 * x) / z);
}