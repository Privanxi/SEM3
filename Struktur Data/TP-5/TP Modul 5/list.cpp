#include <iostream>
#include "list.h"

using namespace std;

void searchElement_103032400084(List &L, infotype x) {
    address current;
    int position;

    current = L.first;
    position = 1;

    while (current != nullptr && current -> info != x) {
        position++;

        current = current -> next;
    }

    if (current != nullptr) {
        cout << "Alamat: " << current << ", Posisi: " << position << endl;
    } else {
        cout << "elemen tersebut tidak ada dalam list" << endl;
    }
}

void selectionSort_103032400084(List &L) {
    address p, min, temp;
    infotype x;

    p = L.first;

    while (p != nullptr) {
        min = p;
        temp = p;

        while (temp != nullptr) {
            if (temp -> info < min -> info) {
                min = temp;
            }
            temp = temp -> next;
        }
        x = p -> info;
        p -> info = min -> info;
        min -> info = x;

        p = p -> next;
    }
}

void insertSorted_103032400084(List &L, address p) {
    address q, prev;
    bool found;

    q = L.first;
    found = false;
    prev = nullptr;

    while (q != nullptr && found == false) {
        if (q -> info < p -> info) {
            prev = q;
            q = q -> next;
        } else {
            found = true;
        }
    }

    if (prev == nullptr) {
        p -> next = q;
        L.first = p;
    } else {
        p -> next = q;
        prev -> next = p;
    }
}
