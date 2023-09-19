#pragma once
ref class Zavdannya
{
	double a, b;

public:
	Zavdannya() { a = 1; b = 1; }

	void F_B(double N);
	void F_A(double N);

	double geta() { return a; }
	double getb() { return b; }
};