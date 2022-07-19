#include <iostream>
using namespace std;

int main()
{
    int l, s;

    cout << "===============================\n";
    cout << "Program Menghitung Luas Persegi\n";
    cout << "===============================\n";

    cout << "Masukkan panjang sisi persegi: ";
    cin >> s;
    cout << "Rumus Luas Persegi adalah s x s\n";

    l = s * s;

    cout << "Maka Luas Persegi adalah " << s << " x " << s << " = " << l << endl;
    system("pause");
    return 0;

}