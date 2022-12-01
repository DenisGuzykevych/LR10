

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    double x, y, vyraz;
    cout << "\n y не дорiвнює -1/3, x бiльше -2";
    cout << "\n Ввести значення x: "; cin >> x;
    cout << "\n Ввести значення y: "; cin >> y;
    vyraz = sqrt(sqrt((x + 2) / (3*y - 1)) + (8 * pow(x, 2) + 3) / (1 - 9* pow(y, 2)));
    if (x > -2 && y != -(1 / 3))
    {
    cout << "\n Результат: " << vyraz << endl;
    }   
    else
    {
    cout << "\n Введено неприпустимi значення x або y!";
    }
    system("pause>>void");
	return 0;
}
