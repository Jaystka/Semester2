#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "Menentukan Bilangan Ganjil Genap" << endl;
	cout << "Masukkan Bilangan : " ;
	cin >> x;

	if ( x % 2 == 0)
	{
		cout << x << " adalah Bilangan Genap\n";

	}
	else
	{
		cout << x << " adalah Bilangan Ganjil\n";
	}
	system("pause");
	return 0;
}