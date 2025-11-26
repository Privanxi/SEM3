#include "tree.h"

int main() {
    int nodeCari, totNode, minNode, maxNode, inNode;
    adrNode root, inAdrNode, x;

    createTree_103032400084(root);

    for (int i = 0; i < 7; i++) {
        cout << "Masukkan node: ";
        cin >> inNode;
        inAdrNode = createNode_103032400084(inNode);
        insertNode_103032400084(root, inAdrNode);
    }
    cout << endl;

    cout << "Masukkan nilai dari node yang ingin dicari: ";
    cin >> nodeCari;

    x = searchNode_103032400084(root, nodeCari);

    if (x != nullptr) {
        cout << "Node dengan nilai " << nodeCari << " ditemukan!";
    } else {
        cout << "Node dengan nilai " << nodeCari << " tidak ditemukan!";
    }
    cout << endl << endl;

    cout << "Print BST (inorder traversal): ";
    displayTree_103032400084(root);
    cout << endl;

    totNode = countNodes_103032400084(root);
    cout << "Jumlah node: " << totNode;
    cout << endl;

    minNode = getMinValue_103032400084(root);
    maxNode = getMaxValue_103032400084(root);

    cout << "Nilai terkecil: " << minNode;
    cout << endl;
    cout << "Nilai terbesar: " << maxNode;

    return 0;
}
