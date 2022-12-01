
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double g, v, T;
	g = 2;
	cout << "\n Введiть вiк: "; cin >> v;
	T = (2 * 365 * v) / (24 * 365);
	cout << "\n Людина курила протягом " << T << " рокiв" << endl;
}

