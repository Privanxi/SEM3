#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>

using namespace std;

typedef char infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList_103032400084(List &L);
bool isEmpty_103032400084(List L);
address allocate_103032400084(infotype x);
void printInfo_103032400084(List L);
void insertFirst_103032400084(List &L, address p);
void insertLast_103032400084(List &L, address p);
void deleteFirst_103032400084(List &L, address &p);
void deleteLast_103032400084(List &L, address &p);
void printInfoFrontToBack_103032400084(List L);
void printInfoBackToFront_103032400084(List L);
void insertLast2(List &L, address p);

bool isPalindrom(List L);

#endif // DLL_H_INCLUDED
