#include "Tree.h"

int main()
{
    cout << "===========================================" << endl;

    char x[13] = {'A', 'B', 'C', 'E', 'F','G','H','I','J','K','L','M'};
    for (char i : x) {
        cout << i << " ";
    }

    // Membuat Tree
    BinTree pohon;
    createTree(pohon);

    root(pohon) = newNode('A');
    left(root(pohon)) = newNode('B');
    right(root(pohon)) = newNode('G');
    left(left(root(pohon))) = newNode('C');
    right(left(root(pohon))) = newNode('D');
    left(right(left(root(pohon)))) = newNode('E');
    right(right(left(root(pohon)))) = newNode('F');
    left(right(root(pohon))) = newNode('H');
    right(right(root(pohon))) = newNode('I');
    left(right(right(root(pohon)))) = newNode('J');
    right(right(right(root(pohon)))) = newNode('K');
    left(right(right(right(root(pohon))))) = newNode('M');
    right(right(right(right(root(pohon))))) = newNode('L');

    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder(root(pohon));

    printf("\n");
    printf("\nIn Order\t: ");
    printInOrder(root(pohon));

    printf("\n");
    printf("\nPost Order\t: ");
    printPostOrder(root(pohon));


    cout << endl << "===========================================" << endl;
    return 0;
}
