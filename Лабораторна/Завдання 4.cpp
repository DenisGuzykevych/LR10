

#include <iostream>
#include <math.h>
using namespace std;
double fun(double a, double b)
{
    return pow(sin(a + b), 3);
}
int main()
{
    setlocale(0, ".1251");
    double y, t, a, b;
    double const x = 10.9;
    cout << "\n Ввести значення t: "; cin >> t;
    b = pow(log10(abs(x)), 2);
    a = pow(t, 3) + sqrt(b);
    y = fun(a, b);
    cout << "\n y = " << y << endl;
}
