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

address allocate_103032400084(infotype x);

void createList_103032400084(List &L);
void insertFirst_103032400084(List &L, address p);
void printInfo_103032400084(List L);

#endif // LIST_H_INCLUDED
