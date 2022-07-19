#include <iostream>
using namespace std;

int main()
{
    // DECLARATION VARIABEL
    double a, b, c, d;

    cout << "==============================================\n";
    cout << "Mencari Bilangan Terbesar dari 3 buah bilangan\n";
    cout << "==============================================\n";

    // INPUT BILANGAN
    cout << "Tulis angka bilangan 1: ";
    cin >> a;
    cout << "Tulis angka bilangan 2: ";
    cin >> b;
    cout << "Tulis angka bilangan 3: ";
    cin >> c;

    // CHECK BILANGAN TERBESAR
    if (a > b && a > c)
    {
        d = a;
    }
    if (b > a && b > c)
    {
        d = b;
    }
    if (c > a && c > b)
    {
        d = c;
    }

    cout << "Bilangan tersebar adalah: " << d;

    return 0;
}