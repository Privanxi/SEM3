#include <iostream>
#include "DLL.H"

using namespace std;

int main() {
    List L;
    char inputChar;
    address addChar;
    string check;

    createList_103032400084(L);


    while (inputChar != '0') {
        cout << "Masukkan kata (per-huruf): ";
        cin >> inputChar;

        if (inputChar != '0') {
            addChar = allocate_103032400084(inputChar);
            insertFirst_103032400084(L, addChar);
        }
    }

    cout << "first: " << L.first -> info << endl;
    cout << "last: " << L.last -> info << endl;

    printInfoBackToFront_103032400084(L);
    cout << endl;
    printInfoFrontToBack_103032400084(L);

    check = (isPalindrom(L)) ? "true" : "false";

    cout << "apakah palindrom? " << check ;

    //printInfo_103032400084(L);


    /*
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
    */

    return 0;
}
