#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List nilai;
    elmlist math, kimia, bio;

    math.info = 11;
    kimia.info = 8;
    bio.info = 9;

    math.next = &kimia;
    kimia.next = &bio;
    bio.next = nullptr;

    nilai.first = &math;

    printList(nilai);

    searchElement_103032400084(nilai, 11);
    selectionSort_103032400084(nilai);

    cout << endl;
    printList(nilai);

    elmlist fisika;

    fisika.info = 7;
    fisika.next = nullptr;
    insertSorted_103032400084(nilai, &fisika);

    cout << endl;
    printList(nilai);

    return 0;
}
