#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;
typedef struct node *adrNode;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

void createTree_103032400084(adrNode &root);
adrNode createNode_103032400084(infotype x);
void insertNode_103032400084(adrNode &root, adrNode p);
adrNode searchNode_103032400084(adrNode root, infotype x);
void displayTree_103032400084(adrNode root);
int countNodes_103032400084(adrNode root);
infotype getMinValue_103032400084(adrNode root);
infotype getMaxValue_103032400084(adrNode root);

#endif // TREE_H_INCLUDED
