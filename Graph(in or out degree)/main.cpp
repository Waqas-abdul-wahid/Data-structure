#include"graph.h"
int main(){
	Graph* quiz=new Graph(4);
	quiz->addEdge(0, 1, 4);
	quiz->addEdge(0, 2, 8);
	quiz->addEdge(0, 3, 7);
	quiz->addEdge(1, 2, 2);
	quiz->addEdge(1, 3, 1);
	quiz->addEdge(2, 1, 8);
	quiz->addEdge(2, 3, 3);
	quiz->addEdge(3, 2, 3);
	
	quiz->display();
//	quiz->indegree(0);
//	quiz->outdegree(0);
	return 0;
}
