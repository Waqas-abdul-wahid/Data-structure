#include "Graph.h"

Graph::Graph(int vertix)
{
    Node *current;
    head = NULL;
    for (int i = 0; i < vertix; ++i)
    {
        if (head == NULL)
        {
            head = new Node(i);
            current = head;
        }
        else
        {
            current->next = new Node(i);
            current = current->next;
        }
    }
}

void Graph::addEdge(int u, int v)
{
    for (Node *current = head; current != NULL; current = current->next)
    {
        if (current->data == u)
        {
            if (current->n != NULL)
                for (Adj *current2 = current->n; current2 != NULL; current2 = current2->next)
                {
                    if (current2->next == NULL)
                        current2->next = new Adj(v);
                }
            else
            {
                current->n = new Adj(v);
            }
        }
    }
}

Node *Graph::getHead()
{
    head->is_visited = true;
    return head;
}

void Graph::printGraph()
{

    for (Node *current = head; current != NULL; current = current->next)
    {
        std::cout << current->data << "-->";
        for (Adj *current2 = current->n; current2 != NULL; current2 = current2->next)
        {
            std::cout << current2->data << "-";
        }
        std::cout << "*" << std::endl;
    }
}

void Graph::BFS(std::queue<Node *> q)
{

    if (q.empty())
        return;
    Node *current = q.front();

    Adj *c = current->n;

    q.pop();

    std::cout << current->data << " - ";

    while (c != NULL)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == c->data)
                break;
            temp = temp->next;
        }
        if (temp->is_visited != true)
        {
            q.push(temp);
            temp->is_visited = true;
        }
        c = c->next;
    }
    BFS(q);
}

void Graph::DFS(Node* curr_1)
{
    curr_1->is_visited=true;
    stack.push(curr_1);

    for (Adj* curr2=curr_1->n;curr2 !=NULL;curr2=curr2->next)
    {
        /* code */
    }
    
}