#include<iostream>
#include<climits>
class Graph{
	int v;
	int** adj;
	public:
		Graph(int ver);
		void addEdge(int i, int j);
		void display();
		void indegree(int i);
		void outdegree(int i);
		void addEdge(int ,int ,int);
};
