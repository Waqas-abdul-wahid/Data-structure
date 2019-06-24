#include"linklist.h"


int main(){
	linkedList* ll1=new linkedList();
	linkedList* ll2=new linkedList();
	linkedList* ll3=new linkedList();
	
	char x;
	int i=0;
	std::cout<<"taking input in list  1: "<<std::endl;
	do{
		std::cout<<"Insert in  node? y/n"<<std::endl;
		std::cin>>x;
		if(x=='y'){
			std::cout<<"Input number  a number in list:  ";
			std::cin>>i;
			ll1->insertNode(i);
		}
	
	while(x!='n');
	f=0;
	x=0;
	std::cout<<"Taking input in  list 2: "<<std::endl;
	do{
		std::cout<<"Insert in node? y/n"<<std::endl;
		std::cin>>f;
		if(f=='y'){
			std::cout<<"Input number: ";
			std::cin>>x;
			ll2->insertNode(x);
		}
	}
	
	ll1->traverse();
	
	ll2->printMiddle();
	
return 0;	
}

