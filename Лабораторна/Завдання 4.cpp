

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    double x, y, t, a, b;
    x = 10.9;
    cout << "\n Ввести значення t: "; cin >> t;
    b = pow(log10(abs(x)), 2);
    a = pow(t, 3) + sqrt(b);
    y = pow(sin(a + b), 3);
    cout << "\n y = " << y << endl;
}
