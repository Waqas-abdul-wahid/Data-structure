#include"graph.h"
Graph::Graph(int ver)
{
	v=ver;
	adj=new int*[v];
	for(int i=0; i<v; ++i){
		adj[i]=new int[v];
	}
	for(int i=0; i<v; ++i)
	{
		for(int j=0; j<v; ++j)
		{
			if(i==j)
			{
			adj[i][j]=0;
			}
			else
			{
				adj[i][j]=INT_MAX;
			}
			
		}
	}
}
void Graph::addEdge(int i, int j){
	adj[i][j]=1;
}
void Graph::display(){
	for(int i=0; i<v; ++i){
		for(int j=0; j<v; ++j){
			if(adj[i][j]== INT_MAX)
			{
				std::cout<<"INFINITE";
			}
			else
			{			
			std::cout<<adj[i][j]<<" ";
			}
		}
		std::cout<<std::endl;
	}
}
void Graph::indegree(int i){
	int degree=0;
	for(int j=0; j<v; ++j){
		if(adj[j][i]==1){
			degree+=1;
		}
	}
	std::cout<<"Indegree of node "<<i<<" is:"<<degree<<std::endl;
}
void Graph::outdegree(int i){
	int degree=0;
	for(int j=0; j<v; ++j){
		if(adj[i][j]==1){
			degree+=1;
		}
	}
	std::cout<<"Outegree of node "<<i<<" is:"<<degree<<std::endl;
}
void Graph::addEdge(int i,int j,int cost)
{
	adj[i][j]=cost;
}