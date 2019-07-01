#include<iostream>
#include<stdlib.h>

void createArray(int *arr,int size)
{
	for(int i=0;i<=size;i++)
	 	arr[i]=rand() % 100-1;
}
void bubblesort(int *arr,int n)
{

	for(int i=0;i<=n-1;i++)
	 {
	  for(int j=0;j<=n-1-i;j++)
	  {
			if(arr[j]>arr[j+1])
	  	{
		 int temp=arr[j];
	  	 arr[j]=arr[j+1];
	  	 arr[j+1]=temp;
		}
	  }
	}
}

void selectionsort(int *arr,int n)
{
	
	for(int i=0;i<=n;i++)
	 {
	 	int min=i;
	  for(int j=i+1;j<=n-1;j++)
	  {
			if(arr[j]<arr[min])
	  	{
		 int temp=arr[j];
	  	 arr[j]=arr[min];
	  	 arr[min]=temp;
		}
	  }
	}
}


void insertionsort(int *arr,int n)
{
	int temp=0;
	for(int i=1;i<=n-1;i++)
	{
	  temp=arr[i];
	  for(int j=i-1;j>=0 && temp<arr[j];j--)
	  {
		arr[j+1]=arr[j];
		arr[j+1]=temp;    
	  }
	}
}

void insertat(int *arr,int n,int index,int value)
{
	for(int i=n-1;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=value;
}

void insert(int *arr,int n)
{
	for(int i=0;i<=n;i++)
	{
		std::cout<<"Enter a value at"<<i<<std::endl;
		std::cin>>arr[i];
	}
}

void print(int *arr,int n)
{
	for(int i=0;i<n;++i)
	{
		std::cout<<arr[i]<<std::endl;
		std::cout<<"\n ";
	}
}

void mergearrays(int *arr,int *arr2,int *arr3,int n1,int n2)
{
	int i=0,j=0,k=0;
	while(i<n1 &&j<n2)
	{
		if(arr[i]<arr2[j])
		{
			arr3[k++]=arr[i++];
		}
		else
		{
			arr3[k++]=arr2[j++];
		}
	}
	while(i<n1)
	{
		arr3[k++]=arr[i++];
	}
	while(j<n2)
	{
		arr3[k++]=arr2[j++];
	}
}




int main()
{
	
	int *arr=new int[9];
	createArray(arr,9);
	int *arr2=new int[9];
	createArray(arr2,9);
	int *arr3=new int[18];
	createArray(arr3,18);	
//	insert(arr,9);	
	std::cout<<"bubblesort "<<std::endl;	
	bubblesort(arr,9);
	std::cout<<"Insertion sorting "<<std::endl;
	insertionsort(arr2,9);
	print(arr,9);
	std::cout<<"second array\n"<<std::endl;
	print(arr2,9);
	std::cout<<"merger arrays"<<std::endl;
	mergearrays(arr,arr2,arr3,9,9);
	print(arr3,18);
	
	
	/*
	std::cout<<"selection sorting"<<std::endl;
	selectionsort(arr,9);
	print(arr,9);
	*/
	return 0;
}



