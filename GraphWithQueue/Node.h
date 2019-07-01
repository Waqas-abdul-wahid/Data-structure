#ifndef NODE_H
#define NODE_H
#include "Adj.h"

class Node
{
public:
    Node *next;
    Adj *n;
    int data;
    Node(int data);
    bool is_visited;
};
#endif // NODE_H