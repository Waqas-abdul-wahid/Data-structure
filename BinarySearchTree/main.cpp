#include"BT.h"


int main()
{
    BST *Tree = new BST(11);

    int coice=0;
    do{
        std::cout<<"Enter the value of nodes: ";
        Tree->root = Tree->indertinBST(Tree->root,22);
        std::cout<<"Press 1 if you want to insert new node,0 to exit :  ";
        std::cin>>coice;
    }
    while(coice!=0);
    
    return 0;
}

