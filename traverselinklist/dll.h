#include<iostream>
#include"node.cpp"

class dll
{
	public:
		Node* head;
		
	dll();
	~dll(){}
	
	void insertfirst(int);
	void traverse();
	void insertNode(int data);
	
	dll* ShuffleMerge(dll*,dll*);
	void alternateSplit(dll* , dll*);
	
	int length();
	void printMiddle();
};


