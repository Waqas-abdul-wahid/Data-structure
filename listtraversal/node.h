#include<iostream>

class Node{
	
	public:
		int info;
		Node* previous;
		Node* next;
        
		Node(int Data);
};


Node::Node(int Data){
	info=Data;
	next=NULL;
	previous=NULL;
}
