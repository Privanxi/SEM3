#include "list.h"

using namespace std;

int main(){
    int angka1, angka2, angka3;
    List L;
    address ak1, ak2, ak3;

    createList_103032400084(L);

    cout << "Angka pertama untuk di input: " << endl;
    cin >> angka1;

    ak1 = allocate_103032400084(angka1);
    insertFirst_103032400084(L, ak1);

    printInfo_103032400084(L);

    cout << "Angka pertama untuk di input: " << endl;
    cin >> angka2;

    ak2 = allocate_103032400084(angka2);
    insertFirst_103032400084(L, ak2);

    printInfo_103032400084(L);

    cout << "Angka pertama untuk di input: " << endl;
    cin >> angka3;

    ak3 = allocate_103032400084(angka3);
    insertFirst_103032400084(L, ak3);

    printInfo_103032400084(L);

    return 0;
}
