#include "tree.h"

void createTree_103032400084(adrNode &root) {
    root = nullptr;
}

adrNode createNode_103032400084(infotype x) {
    adrNode p = new node;

    p -> info = x;
    p -> left = nullptr;
    p -> right = nullptr;

    return p;
}

void insertNode_103032400084(adrNode &root, adrNode p) {
    if (root == nullptr) {
        root = p;
    } else if (p -> info < root -> info) {
        insertNode_103032400084(root -> left, p);
    } else {
        insertNode_103032400084(root -> right, p);
    }
}

adrNode searchNode_103032400084(adrNode root, infotype x) {
    if (root == nullptr) {
        return nullptr;
    } else if (x == root->info) { //line tambahan yang tidak ada di modul
        return root; //line tambahan yang tidak ada di modul
    }else if (x < root -> info) {
        return searchNode_103032400084(root -> left, x);
    } else {
        return searchNode_103032400084(root -> right, x);
    }

    return root; //line ini sudah tidak diperlukan
}

void displayTree_103032400084(adrNode root) {
    if (root != nullptr) {
        displayTree_103032400084(root -> left);
        cout << root -> info << " ";
        displayTree_103032400084(root -> right);
    }
}

int countNodes_103032400084(adrNode root) {
    if (root == nullptr) {
        return 0;
    } else {
        return 1 + countNodes_103032400084(root -> left) + countNodes_103032400084(root -> right);
    }
}

infotype getMinValue_103032400084(adrNode root) {
    adrNode x = root;

    if (x == nullptr) {
        cout << "root kosong";
        x -> info = 0;
    }

    while (x -> left != nullptr) {
        x = x -> left;
    }

    return x -> info;
}

infotype getMaxValue_103032400084(adrNode root) {
    adrNode x = root;

    if (x == nullptr) {
        cout << "root kosong";
        x -> info= 0;
    }

    while (x -> right != nullptr) {
        x = x -> right;
    }

    return x -> info;
}
