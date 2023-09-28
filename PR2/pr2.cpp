#include <iostream>
using namespace std;

int main()
{
	double a;
	double z1;
	double z2;

	cout << "Angle Alpha: "; cin >> a;



	z1 = 1 / ((1 + a + a * a) / (2 * a + a * a) + 2 - (1 - a + a * a) / (2 * a - a * a)) * (5 - 2 * a * a);
	z2 = (4 - a * a) / 2;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
