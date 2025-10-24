#include <iostream>
#include "DLL.H"

using namespace std;

int main() {
    List L;
    int angka1, angka2, angka3;
    address ak1, ak2, ak3;

    createList_103032400084(L);

    cout << "Masukkan elemen pertama: ";
    cin >> angka1;

    ak1 = allocate_103032400084(angka1);
    insertFirst_103032400084(L, ak1);

    cout << "Masukkan elemen kedua di awal: ";
    cin >> angka2;

    ak2 = allocate_103032400084(angka2);
    insertLast_103032400084(L, ak2);

    cout << "Masukkan elemen ketiga di akhir: ";
    cin >> angka3;

    ak3 = allocate_103032400084(angka3);
    insertLast_103032400084(L, ak3);
    cout << endl;

    deleteFirst_103032400084(L, ak1);
    cout << "elemen pertama telah dihapus" << endl;
    deleteLast_103032400084(L, ak3);
    cout << "elemen terakhir telah dihapus" << endl << endl;

    cout << "daftar elemen list: ";
    printInfo_103032400084(L);

    return 0;
}
