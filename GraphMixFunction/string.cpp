#include"string.h"


int* string::createArray(int size)
{
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        arr[i]=0;
    }
    return arr;
}

/*
void string::insertAt(int* arr,int size,int index,int value)
{
    int i=0;
    for(i=size-1;i<index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
}
void string::deletefrom(int *arr,int size,int index)
{
    int i=0;

    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }

}
*/
void string::printArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<"arr[ "<< i <<" ] "<<arr[i]<<std::endl;
    }
}
/*
int string::linearSearch(int *arr,int size,int element)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -i;
}

int string::binarySeacrh(int *arr,int left,int right,int element)
{
    while(left<=right)
    {
        int mid = (left+right)/2;

        if (arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]>element)
        {
            right=arr[mid+1];
        }
        else
        {
            left=arr[mid-1];
        }
    } 
    return -1; 
}


void string::bubbleSort(int *arr,int size)
{
    int temp,i,j;
    for(j=0;j<size-1;j++)
    {
            for(i=0;i<size-j-1;i++)
                {
                    if(arr[i]>arr[i+1])
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
    }
}
*/ 
void string::selectionSort(int *arr,int size)
{
    int i,j,temp,min;
    for(i=0;i<size;i++)
    {
        min=i;
            for(j=i+1;j<size;++j)
                {
                    if(arr[j]>arr[min])
                    min=j;
                    temp=arr[min];
                    arr[min]=arr[j];
                    arr[j]=temp;
                }
    }    
}

void string::insertionSort(int* arr,int size)
{
    int i,j,temp,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
            for(j=i-1;j>=0 && arr[j]>key;--j)
                {
                    arr[j+1]=arr[j];
                }
                    arr[j+1]=key;
                    
    
    }
}

/*
int string::mergeArrays(int *arr,int *arr2,int size1,int size2,int *arr3)
{
	int k=0,i=0,j=0;
	while(i<n1 && j<n2){
		if(arr1[i]<arr2[j])
			
			arr3[k++]=arr1[i++];
			
			else
			
			arr3[k++]=arr2[j++];
		}
		while(i<n1)
			arr3[k++]=arr1[j++];
			
		while(j<n2)
			arr3[k++]=arr2[j++];
			
	}
    return arr3;
}
*/
string::string()
{
}

string::~string()
{
}
/*
int string::stringlength(std::string str)
{
    int i=0
    while(str[i]!=NULL)
    i++;
    return i;
}

std::string string::concate(std::string str1,std::string str2)
{
    int  i=0,j=0;
    std::string=str1+str2; 
    while(str1[i]!=NULL)
    {
        str3[i]=str1[i];
        i++;

        
    }

    while(str2[j]!=NULL)
    {
        str3[i++]=str2[j++];
        str3[i]=NULL;
    }
    return str3;
}
*/

void string::linearSort(int*arr,int size)
{
    int i=0,j=0,temp=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
