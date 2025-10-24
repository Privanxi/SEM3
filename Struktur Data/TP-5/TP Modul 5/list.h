#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void searchElement_103032400084(List &L, infotype x);
void selectionSort_103032400084(List &L);
void insertSorted_103032400084(List &L, address p);

#endif // LIST_H_INCLUDED
