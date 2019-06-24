#include"dll.h"

dll::dll()
{
	head=NULL;
	
}


void dll::insertfirst(int data)
{
	Node* temp=new Node(data);
	
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head->pre=temp;
		head=temp;
	}
}

void dll::traverse()
{
	if(head==NULL)
	{
		std::cout<<"The list is empty man :"<<std::endl;
	}
	else
	{
		Node *current=head;
		while(current!=NULL)
		{
			std::cout<<current->info<<std::endl;
			current=current->next;
		}
	}
}

void dll::insertNode(int data)
{
	if(head==NULL)
	{
		head=new Node(data);
	}
	else
	{
		Node *current=head;
		while(current->next!=NULL)//i+1!=null
		{
			current=current->next;//i++
		}
		current->next=new Node(data);
		current->next->pre=current;
		
	}
}

//Q1 ,function two list merge
dll* dll::ShuffleMerge(dll* l1,dll* l2)
{
	Node* current1=l1->head;
	Node* current2=l2->head;
	
	while(current1!=NULL && current2!=NULL )
	{
		insertNode(current1->info);
		insertNode(current2->info);
		
		current1=current1->next;
		current2=current2->next;
		
	}
	if(current1==NULL)
	{
		while(current2!=NULL)
		{
			insertNode(current2->info);
			current2=current2->next;
		}
	}
	
	else if(current2==NULL)
	{
		while(current1!=NULL)
		{
			insertNode(current1->info);
			current1=current1->next;
		}
		
	}
	return this;//ek ek kar k values
}


//Q2 problems spliting of link list
void dll::alternateSplit(dll* l1,dll* l2)
{
	int i=0; ///counter
	Node* current=head;
	while(current!=NULL)
	{
		if(i%2==0)
		{
			l1->insertNode(current->info);
			++i;
			current=current->next;//pointer ++
		}
		else
		{
			l2->insertNode(current->info);
			++i;//counter increament
			current=current->next;//pointer aga aga
		}
	}
}


int dll::length()
{
	int i=0;
	Node* current=head;
	while(current!=NULL){
		++i;
		current=current->next;
	}
	return i;///basically length return
}


void dll::printMiddle()
{
	int i=length();
	Node* current=head;
	if(i%2==0){
		for(int j=0; j<i/2; j++){
			current=current->next;
		}
		float average=0, d1=current->info, d2=current->pre->info;
		average=(d1+d2)/2;
		std::cout<<"Even number of nodes, 2 middle nodes found "<<current->info<<" and "<<current->pre->info<<". Printing average: "<<average<<std::endl;
	}
	else{
		for(int j=0; j<i/2; j++){
			current=current->next;
		}
		std::cout<<"Middle node data: "<<current->info<<std::endl;
	}
	
}
