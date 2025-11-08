#include "queue.h"

int main() {
    Queue Q;
    address p;
    int usia, inputAntrean, banyakPasien, inputPrioritas;
    string nama, pekerjaan;

    createQueue_103032400084(Q);
    cout << "masukkan banyak pasien yang ingin di input: ";
    cin >> banyakPasien;
    cout << endl;

    for (int i = 0; i < banyakPasien; i++) {
        cout << "Pasien ke-" << i + 1 << endl;
        cout << "nama: ";
        cin >> nama;

        cout << "usia: ";
        cin >> usia;

        cout << "pekerjaan: ";
        cin >> pekerjaan;

        cout << "nomor antrean: ";
        cin >> inputAntrean;

        p = allocate_103032400084(nama, usia, pekerjaan, inputAntrean);
        enqueue_103032400084(Q, p);
        cout << endl;
    }

    cout << endl;
    cout << "banyak pasien dalam antrean: " << size_103032400084(Q) << endl;

    cout << "serve queue: " << endl;
    serveQueue_103032400084(Q);
    cout << endl;

    cout << "emergency handle dan serve queue: " << endl;
    cout << "masukkan nomor antrean yang ingin di prioritaskan: ";
    cin >> inputPrioritas;
    emergencyHandle_103032400084(Q, inputPrioritas);
    serveQueue_103032400084(Q);
    cout << endl;

    cout << "reassign queue dan serve queue: " << endl;
    reassignQueue_103032400084(Q);
    serveQueue_103032400084(Q);

    return 0;
}
