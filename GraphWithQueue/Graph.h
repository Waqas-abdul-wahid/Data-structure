#ifndef GRAPH_H
#define GRAPH_H
#include "Node.h"
#include <queue>
#include <stack>

class Graph
{
public:
    int vertix;
    Node *head;
    std::stack <Node*> stack;
    Graph(int vertix);
    void addEdge(int, int);
    Node *getHead();
    void printGraph();
    void BFS(std::queue<Node *> q);
    void DFS(Node* );
};
#endif
