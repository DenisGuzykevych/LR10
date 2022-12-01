
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double T, n, t;
	cout << "\n Введiть кiлькiсть прийомiв їжi: "; cin >> n;
	cout << "\n Введiть тривалiсть прийомiв їжi: "; cin >> t; 
	T = n * t * 365 * 75 / (60 * 24 * 365);
	cout << "\n Загальна кiлькiсть рокiв витрачених на прийоми їжi: " << T << endl;
}



