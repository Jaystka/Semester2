#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;

	cout << "********************************************\n";
	cout << "Menentukan bilangan terbesar dari 3 bilangan\n";
	cout << "********************************************\n";

	cout << "Masukkan Bilangan Pertama : "; cin >> a;
	cout << "Masukkan Bilangan Kedua   : "; cin >> b;
	cout << "Masukkan Bilangan Ketiga  : "; cin >> c;

	if (a >= b && a >= c)
	{
		d = a;
	}
	if (b >= a && b >= c)
	{
		d = b;
	}
	if (c >= a && c >= b)
	{
		d = c;
	}

	cout << "Bilangan Terbesar adalah : " << d;

	return 0;
}
