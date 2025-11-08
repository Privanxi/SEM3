#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

typedef struct elmQueue *address;

struct infotype {
    string nama;
    int usia;
    string pekerjaan;
    bool prioritas;
    int nomorAntrean;
};

struct Queue {
    address head;
    address tail;
};

struct elmQueue {
    infotype info;
    address next;
};

void createQueue_103032400084(Queue &Q);
bool isEmpty_103032400084(Queue Q);
address allocate_103032400084(string nama, int usia, string pekerjaan, int nomorAntrean);
address front_103032400084(Queue Q);
address back_103032400084(Queue Q);
void enqueue_103032400084(Queue &Q, address p);
void dequeue_103032400084(Queue &Q, address &p);
int size_103032400084(Queue Q);
void printPatient_103032400084(address p);
void serveQueue_103032400084(Queue &Q);
void reassignQueue_103032400084(Queue &Q);
void emergencyHandle_103032400084(Queue &Q, int nomorAntrean);

#endif // QUEUE_H_INCLUDED
