#include "Graph.h"
#include <queue>

int main()
{
    Graph *graph = new Graph(4);
    graph->addEdge(0, 1);
    graph->addEdge(1, 2);
    graph->addEdge(2, 3);
    graph->addEdge(3, 0);

    graph->printGraph();
    std::queue<Node *> q;
    q.push(graph->getHead());
    graph->BFS(q);
    return 0;
}