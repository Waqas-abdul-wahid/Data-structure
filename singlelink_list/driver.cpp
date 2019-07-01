#include"list.h"
#include<iostream>

int main()
{
	int flag=0;
	int data=0;
	
	linklist *ll =new linklist();
	
	do{
		std::cout<<"Press \n1 to add \n2 to exit \n";
		std::cin>>flag;
		
		if(flag==1)
		{
			std::cout<<"\n Enter a data :\n";
			std::cin>>data;
		
		ll->insertFirst(data);
		}
	}
	while(flag!=0);
	
		std::cout<<"\n Traversing the linkedlist \n";
		std::cout<<std::endl;
		ll->traverselist();
	
	
return 0;
}