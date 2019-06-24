#include"dll.cpp"
int main(){
	dll* l1=new  dll();
	dll* l2=new  dll();
	dll* l3=new  dll();
	dll* l4=new  dll();
	dll* l5=new  dll();
	
	char flag;
	int data=0;
	std::cout<<"input in list 1: "<<std::endl;
	do{
		std::cout<<"Insert node? y/n"<<std::endl;
		std::cin>>flag;
		if(flag=='y'){
			std::cout<<"Input number: ";
			std::cin>>data;
			l1->insertNode(data);
			l1->insertNode(data);
		}
	}
	while(flag!='n');
	
	data=0;

	std::cout<<"input in list 2: "<<std::endl;
	do{
		std::cout<<"Insert node? y/n"<<std::endl;
		std::cin>>flag;
		if(flag=='y'){
			std::cout<<"Input number: ";
			std::cin>>data;
			l2->insertNode(data);
		}
	}
	while(flag!='n');
	
	
	std::cout<<"Shuffle Merging"<<std::endl;
	l3=l3->ShuffleMerge(l1,l2);
	
	l3->traverse();
	
	std::cout<<"Performing alternate break"<<std::endl;
	l3->alternateSplit(l4,l5);
	
	
	std::cout<<"Split list 1"<<std::endl;
	l4->traverse();
	
	std::cout<<"Split list 2"<<std::endl;
	l5->traverse();
	
	l5->printMiddle();
	return 0;
}

