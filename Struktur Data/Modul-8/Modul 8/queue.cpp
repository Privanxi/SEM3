#include "queue.h"

void createQueue_103032400084(Queue &Q) {
    Q.head = nullptr;
    Q.tail = nullptr;
}

bool isEmpty_103032400084(Queue Q) {
    return (Q.head == nullptr && Q.tail == nullptr);
}

address allocate_103032400084(string nama, int usia, string pekerjaan, int nomorAntrean) {
    address p = new elmQueue;
    infotype x;

    x.nama = nama;
    x.usia = usia;
    x.pekerjaan = pekerjaan;
    x.prioritas = usia >= 60 || pekerjaan == "tenaga_kesehatan";
    x.nomorAntrean = nomorAntrean;
    p -> info = x;
    p -> next = nullptr;

    return p;
}

address front_103032400084(Queue Q) {
    return Q.head;
}

address back_103032400084(Queue Q) {
    return Q.tail;
}

void enqueue_103032400084(Queue &Q, address p) {
    address temp;
    bool inputPasienBukanPrioritas, semuaPasienPrioritas, tidakAdaPasienPrioritas;

    if (!isEmpty_103032400084(Q)) {
        inputPasienBukanPrioritas = !p -> info.prioritas;
        semuaPasienPrioritas = Q.tail -> info.prioritas;
        tidakAdaPasienPrioritas = !Q.head -> info.prioritas;
    }

    if (isEmpty_103032400084(Q)) {
        Q.head = p;
        Q.tail = p;
    } else if (inputPasienBukanPrioritas || semuaPasienPrioritas) {
        Q.tail -> next = p;
        Q.tail = p;
    } else if (tidakAdaPasienPrioritas) {
        p -> next = Q.head;
        Q.head = p;
    } else {
        temp = Q.head;

        while (temp -> next != nullptr && temp -> next -> info.prioritas) {
            temp = temp -> next;
        }

        p -> next = temp -> next;
        temp -> next = p;
    }
}

void dequeue_103032400084(Queue &Q, address &p) {
    if (!isEmpty_103032400084(Q)) {
        p = Q.head;
        Q.head = p -> next;

        if (Q.head == nullptr) {
            Q.tail = nullptr;
        }
    } else {
        p = nullptr;
    }
}

int size_103032400084(Queue Q) {
    int count;
    address p;

    count = 0;
    p = Q.head;

    while (p != nullptr) {
        count++;
        p = p -> next;
    }

    return count;
}

void printPatient_103032400084(address p) {
    if (p != nullptr) {
        cout << "------------------------------" << endl;
        cout << "nama: " << p -> info.nama << endl;
        cout << "usia: " << p -> info.usia << endl;
        cout << "pekerjaan: " << p -> info.pekerjaan << endl;
        cout << "prioritas: " << p -> info.prioritas << endl;
        cout << "nomor antrean: " << p -> info.nomorAntrean << endl;
    }
}

void serveQueue_103032400084(Queue &Q) {
    address p;
    int i = 0;

    while (i < 5 && !isEmpty_103032400084(Q)) {
        dequeue_103032400084(Q, p);
        printPatient_103032400084(p);
        cout << "Vaksinasi berhasil." << endl;
        i++;
    }
}

void reassignQueue_103032400084(Queue &Q) {
    address p;
    p = Q.head;

    while (p != nullptr) {
        if (p -> info.prioritas == false) {
            p -> info.prioritas = true;
        }
        p = p -> next;
    }
    cout << "Data prioritas pasien telah di update" << endl;
}

void emergencyHandle_103032400084(Queue &Q, int nomorAntrean) {
    address p, temp;
    bool ketemu;

    if (!isEmpty_103032400084(Q)) {
        if (Q.head -> info.nomorAntrean == nomorAntrean) {
            Q.head -> info.prioritas = true;
        } else {
            temp = Q.head;
            p = Q.head -> next;
            ketemu = false;

            while (p != nullptr && !ketemu) {
                if (p -> info.nomorAntrean == nomorAntrean) {
                    ketemu = true;
                } else {
                    temp = p;
                    p = p -> next;
                }
            }

            if (ketemu) {
                temp -> next = p -> next;
                if (p -> next == nullptr) {
                    Q.tail = temp;
                }
                p -> info.prioritas = true;
                p -> next = Q.head;
                Q.head = p;
            }
        }
    }
}
