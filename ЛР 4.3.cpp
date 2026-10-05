#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x;    // поточне значення x
	double xp;   // початкове значення
	double xk;   // кінцеве значення
	double dx;   // крок
	double a, b, c; // дійсні числа з умови
	double F;    // результат

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 1 && c != 0)
			F = a * x * x + b / c;
		else
			if (x > 1.5 && c == 0)
				F = (x - a) / ((x - c) * (x - c));
			else
				F = x * x / (c * c);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}