#include"Node.h"

class BST
{
private:
    
    
public:
    Node *root;
    BST();
    BST(int key);

    ~BST();
    Node* indertinBST(Node *root,int data);
    Node* deleteRec(Node * root,int data);
};
