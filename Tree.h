#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define root(T) T.root
#define info(N) N->info
#define left(N) N->left
#define right(N) N->right

typedef char infotype;
typedef struct Node *adrNode;
struct Node {
    infotype info;
    adrNode left,right;
};
struct BinTree{adrNode root;};

void createTree(BinTree &Tree);
adrNode newNode(infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printInOrder(adrNode root);
void printPostOrder(adrNode root);

#endif // TREE_H_INCLUDED
