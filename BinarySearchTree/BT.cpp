#include"BT.h"

BST::BST()
{
    root=NULL;
}

BST::BST(int key)
{
    root=new Node(key);
}

Node* BST::indertinBST(Node *root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        std::cout<<"new node bana di"<<std::endl;
        return root;
    }
    else
    {
     if(data<root->key)
        root->left=indertinBST(root->left,data);
    else if(data>root->key)
        root->right=indertinBST(root->right,data);   
    }
    return root;
}

Node* BST::deleteRec(Node* root,int data)
{
    if(root==nullptr)
    return root;

    if(data<root->key)
        root->left=deleteRec(root->left,data);
    else if(data>root->key)
        root->right=deleteRec(root->right,data);
    else
    {
        if(root->left==NULL)
        return root->right;
        else if(root->right==NULL)
        return root->left;
    }
        
}