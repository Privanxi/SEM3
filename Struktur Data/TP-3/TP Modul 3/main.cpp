#include <iostream>

using namespace std;

int main()
{
    int contoh = 100;
    int *p = &contoh;

    cout << "Nilai angka: " << contoh << endl;
    cout << "Alamat angka: " << &contoh << endl;
    cout << "Nilai dari pointer: " << *p << endl;
    cout << "Alamat dari pointer: " << p << endl;

    return 0;
}
