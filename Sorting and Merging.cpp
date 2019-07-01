#include <iostream>
#include <stdlib.h>

void createArray (int *, int size);
void bubbleSort(int*);
void selectionSort(int*, int);
void insertionSort(int*);
void printArray(int*, int size);
void mergeArray (int *, int *, int *, int , int);
int main()
{
	int size1,size2;
	std::cout<<"Enter Size of Array 1: ";
	std::cin>>size1;
	std::cout<<"Enter Size of Array 2: ";
	std::cin>>size2;
	int size3=size1+size2;
	int *array1 = new int [size1];
	createArray(array1,size1);
	int *array2 = new int [size2];
	createArray(array2, size2);
	int *array3 = new int [size3];
	selectionSort(array1,size1);
	selectionSort(array2,size2);
	printArray(array1,size1);
	printArray(array2,size2);
	mergeArray (array1,array2,array3, size1, size2);
	printArray (array3,size3);
}

void createArray (int *array, int size1)
{
	for (int i=0;i<size1;++i)
	{
		array[i]=rand() % 100 + 1;
	}
}

void bubbleSort(int* data)
{
	for (int i=0;i<10;++i)
	{
		for (int j=0;j<9;++j)
		{
			if(data[j+1]<data[j])
			{
			int temp=data[j];
			data[j]=data[j+1];
			data[j+1]=temp;
			}
		}
	}
}

void selectionSort(int* data, int size)
{
	for (int i=0;i<size;++i)
	{
		int min=i;
		for (int j=i+1;j<size;++j)
		{
			if (data[j]<data[min])
			{
				int temp=data[j];
				data[j]=data[min];
				data[min]=temp;
			}
		}
	}
}
void insertionSort(int* data)
{
	for (int i=0;i<9;++i)
	{
		
		for (int j=i+1;j>=1;--j)
		{
			int key=j-1;
			if (data[j]<data[key])
			{
				int temp=data[j];
				data[j]=data[key];
				data[key]=temp;
			}
		}
		
	}
}

void printArray(int* data, int size)
{
	for (int i=0;i<size;++i)
	{
		std::cout<<"Array "<<i<<" = "<<data[i];
		std::cout<<"\n";
	}
	std::cout<<"\n";
}

void mergeArray (int *arr1, int *arr2, int *arr3, int n1, int n2)
{
	int k=0,i=0,j=0;
	while (i<n1 && j<n2)
	{
		if (arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else 
		{
			arr3[k++]=arr2[j++];
		}
	}
	
	while (i<n1)
	{
		arr3[k++]=arr1[i++];
	}
	while (j<n2)
	{
		arr3[k++]=arr2[j++];
	}
	
}
