#include"list.h"

linklist::linklist()
{
	head=NULL;
}



void linklist::insertFirst(int data)
{
		Node *temp = new Node(data);
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			temp->next =head;
			head = temp;
		}
}

void linklist::traverselist()
{
	Node *current=head;
	 while(current!=NULL)
	 {
		 std::cout<<" "<<current->data<<std::endl;
		 current=current->next;
	 }
}

void linklist::insertlast(int data)
{
	Node *temp =new Node(data);
	
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		Node *current = head;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=temp;
	}
}

void linklist::insertAtFirst(int data)
{
	Node *temp=new Node(data)
	
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
			temp->next=head;
	}
}