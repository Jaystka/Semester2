/*
* Praktek pemrograman ganjil genap
* demo input dari keyboard
*/

#include <iostream>

using namespace std;

int main()
{
	// variable untuk diperiksa
	int x;

	cout << "Cek Apakah Bilangan Tersebut Ganjil / Genap" << endl;
	cout << "Input : ";
	// membaca input dari keyboard
	// disimpan dalam variabel x
	cin >> x;

	//dicek apakah x habis dibagi 2
	if (x % 2 == 0)
	{
		cout << "Genap\n"; // jika iya
		cout << "Ini adalah baris baru\n";
	}
	else
	{
		cout << "Ganjil\n"; // jika tidak
		cout << "Ini adalah baris yang lain\n";

	}

	system("pause");

	return 0;
}