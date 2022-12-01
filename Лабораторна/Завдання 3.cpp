#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double x, y, z1, z2;
	cout << "\n Ввести значення x: "; cin >> x;
	cout << "\n Ввести значення y: "; cin >> y;
	z1 = pow(cos(x), 2) + pow(sin(y), 2) + (1 / 4 * pow(sin(2 * x), 2)) - 1;
	z2 = sin(x + y) * sin(y - x);
	cout << "\n z1 = " << z1 << endl;
	cout << "\n z2 = " << z2 << endl;

	if (z1 = z2) cout << "\n Результати спiвпали";
	else cout << "\n Результат не спiвпав, введено неприпустимi значення x i y";
	system("pause>>void");
	return 0;
}