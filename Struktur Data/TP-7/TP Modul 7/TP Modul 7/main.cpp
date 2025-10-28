#include "stack.h"

int main() {
    int input, totalJumStack;
    stack S;

    createStack_103032400084(S);

    for (int i = 0; i < MAXSTACK; i++) {
        cout << "input angka ke-" << i + 1 << ": ";
        cin >> input;

        push_103032400084(S, input);

        if (i == MAXSTACK-1) {
            cout << "stack sudah penuh!" << endl;
        }
    }

    cout << endl;
    totalJumStack = sumStack_103032400084(S);
    cout << "hasil penjumlahan elemen dalam stack: " << totalJumStack << endl;

    return 0;
}
