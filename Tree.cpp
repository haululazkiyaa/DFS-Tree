#include "Tree.h"

void createTree(BinTree &Tree){
    root(Tree) = NULL;
}

adrNode newNode(infotype x){
    adrNode n = new Node;
    info(n) = x;
    left(n) = right(n) = NULL;
    return n;
}

void insertNode(adrNode &root, adrNode p){
    if (root == NULL) {
        root = p;
    } else {
        if (info(root) > info(p)) {
            insertNode(left(root), p);
        } else if (info(root) < info(p)) {
            insertNode(right(root), p);
        }
    }
}

void printPreOrder(adrNode root){
    if (root == NULL) {
        return;
    }
    cout << info(root) << " ";
    printPreOrder(left(root));
    printPreOrder(right(root));
}

void printInOrder(adrNode root){
    if (root == NULL) {
        return;
    }
    printInOrder(left(root));
    cout << info(root) << " ";
    printInOrder(right(root));
}

void printPostOrder(adrNode root){
    if (root == NULL) {
        return;
    }
    printPostOrder(left(root));
    printPostOrder(right(root));
    cout << info(root) << " ";
}
