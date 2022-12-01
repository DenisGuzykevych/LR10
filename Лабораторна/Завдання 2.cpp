
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    double vysota, mediana, AB, BC, AC, perymetr, pivperymetr;
	int xa = 0, xb = 8, xc = -8;
	int ya = 0, yb = 7, yc = 9;
	AB = sqrt(((xb * xb) - (2 * xb * xa) + (xa * xa)) + ((yb * yb) - (2 * yb * ya) + (ya * ya)));
	BC = sqrt(((xc * xc) - (2 * xc * xb) + (xb * xb)) + ((yc * yc) - (2 * yc * yb) + (yb * yb)));
	AC = sqrt(((xc * xc) - (2 * xc * xa) + (xa * xa)) + ((yc * yc) - (2 * yc * ya) + (ya * ya)));
	cout << "AB = " << AB << " cм" << endl;
	cout << "BC = " << BC << " cм" << endl;
	cout << "AC = " << AC << " cм" << endl;
	perymetr = (AB + BC + AC);
	pivperymetr = perymetr / 2;
	vysota = (2 / BC) * sqrt(pivperymetr * (pivperymetr - AB) * (pivperymetr - BC) * (pivperymetr - AC));
	cout << "Висота трикутника = " << vysota << " cм" << endl;
	mediana = sqrt((2 * pow(AB, 2)) + (2 * pow(BC, 2)) - (pow(AC, 2))) / 2;
	cout << "Медiана трикутника = " << mediana << " cм" << endl;
}

