#include<iostream>

int* createArray(int size)
{
	int *arr=new int[size];
	
	for(int i=0;i<=size;i++)
		arr[i]=0;
	return arr;	
	
}

void printArray(int *arr,int size)
{
	for(int i=0;i<=size;++i)
	{
		std::cout<<"arr["<<i<<"] = "<<arr[i]<<std::endl;
	}
}

int searching_al(int *arr,int size,int element)
{
	for(int i=0;i<=size;++i)
	{
		if(arr[i]==element)
			return i;
	}
	return -1;
}

int binarySearch(int *arr,int left,int right,int element)
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		
		if(arr[mid]==element)
			return mid;
			
		else if(arr[mid]<element)
			left=mid+1;
			
		else
			right=mid-1;
	}
	return -1;
}

int main()
{
	int size=10,searchelement=0,resultIndex=0;
	//int *array=new int[size];
	int *arr=createArray(size);
	int number=1; 
	printArray(arr,size);
	for(int i=0;i<size;i++)
	{
		arr[i]=(number++*number)+i;
	}
	
	std::cout<<"Enter number"<<std::endl;
	std::cin>>searchelement;
	
	//resultIndex=searching_al(array,size,searchelement);
	resultIndex=binarySearch(arr,0,size-1,searchelement);
	
	if(resultIndex==-1)
		std::cout<<"not found"<<std::endl;
	else
		std::cout<<"found at"<<resultIndex<<std::endl;
	return 0;
}
