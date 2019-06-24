#include"linklist.h"
linkedList::linkedList(){
	head=NULL;
}
linkedList::~linkedList(){
	
}
void linkedList::traverse(){
	if(head==NULL){
		std::cout<<"Empty"<<std::endl;
	}
	else{
		Node* current=head;
		while(current!=NULL){	
			std::cout<<current->data<<std::endl;
			current=current->next;
		}
	}
}
void linkedList::insertFirst(int data){
	Node* temp=new Node(data);
	if(head==NULL){
		head=temp;
	}
	else{
		temp->next=head;
		head->previous=temp;
		head=temp;
	}
}
void linkedList::insertNode(int data){
	if(head==NULL){
		head=new Node(data);
	}
	else{
		Node* current=head;
		while(current->next!=NULL){	
			current=current->next;
		}
		current->next=new Node(data);
		current->next->previous=current;
	}
}
int linkedList::length(){
	int count=0;
	Node* current=head;
	while(current!=NULL){
		++count;
		current=current->next;
	}
	return count;
}
void linkedList::printMid(){
	int count=length();
	Node* current=head;
	if(count%2==0){
		for(int i=0; i<count/2; i++){
			current=current->next;
		}
		float average=0, d1=current->data, d2=current->previous->data;
		average=(d1+d2)/2;
		std::cout<<"Even number of nodes, 2 mid nodes found "<<current->data<<" and "<<current->previous->data<<". Printing average: "<<average<<std::endl;
	}
	else{
		for(int i=0; i<count/2; i++){
			current=current->next;
		}
		std::cout<<"Mid node data: "<<current->data<<std::endl;
	}

