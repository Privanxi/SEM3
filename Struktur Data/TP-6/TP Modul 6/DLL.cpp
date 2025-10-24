#include <iostream>
#include "DLL.H"

using namespace std;

void createList_103032400084(List &L){
    L.first = nullptr;
}
address allocate_103032400084(infotype x){
    address p = new elmlist;

    p -> info = x;
    p -> next = nullptr;
    p -> prev = nullptr;
    return p;
}

bool isEmpty_103032400084(List L){
    return (L.first == nullptr || L.last == nullptr);
}

void printInfo_103032400084(List L){
    address p = L.first;
    while (p != nullptr) {
        cout << p -> info;
        if (p -> next != nullptr) {
            cout << ", ";
        }
        p = p -> next;
    }

    cout << endl;
}

void insertFirst_103032400084(List &L, address p){
    if(isEmpty_103032400084(L)){
        L.first = p;
        L.last = p;
    }else{
        p -> next = L.first;
        L.first -> prev = p;
        L.first = p;
    }
}
void insertLast_103032400084(List &L, address p){
    if(isEmpty_103032400084(L)){
        L.first = p;
        L.last = p;
    }else{
        p -> prev = L.last;
        L.last -> next = p;
        L.last = p;
    }
}
void deleteFirst_103032400084(List &L, address &p){
    if(isEmpty_103032400084(L)){
        p = nullptr;
    }else if(L.first == L.last){
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    }else{
        p = L.first;
        L.first = L.first->next;
        L.first->prev = nullptr;
        p->next = nullptr;
    }
}
void deleteLast_103032400084(List &L, address &p){
    if(isEmpty_103032400084(L)){
        p = nullptr;
    }else if(L.first == L.last){
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    }else{
        p = L.last;
        L.last = L.last->prev;
        L.last->next = nullptr;
        p->prev = nullptr;
    }
}
void printInfoFrontToBack_103032400084(List L){
    address p = L.first;
    while (p != nullptr) {
        cout << p -> info;
        if (p -> next != nullptr) {
            cout << ", ";
        }
        p = p -> next;
    }

    cout << endl;
}
void printInfoBackToFront_103032400084(List L){
    address p = L.last;
    while (p != nullptr) {
        cout << p -> info;
        if (p -> prev != nullptr) {
            cout << ", ";
        }
        p = p -> prev;
    }

    cout << endl;
}
