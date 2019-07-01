#include"string.h"
#include<stdlib.h>

int main()
{
    string a;
    
    int size=0, element=0, left=0,right=0,value=0,index=0;
    std::cout<<"\nSize of array ? :";
    std::cin>>size;
    std::cout<<std::endl;
    int *arr=a.createArray(size);
    for(int i=0;i<size;i++)
    {
        std::cout<<"Value at index :"<<i<<" ";
        arr[i]=rand()%100+1;
    }

    
    a.printArray(arr,size);
    /*
    for(int i=0;i<size;i++)
    {
        std::cout<<"Value at index :"<<i<<" ";
        std::cin>>arr[i];
    }


    char ch = 0;
    do
    {
        std::cout<<"\nValue ?";
        std::cin>>value;

        std::cout<<"\nAt which index ?";
        std::cin>>index;
        a.insertAt(arr,size,index,value);
       
        std::cout<<"===After insertion in array ==="<<std::endl;
        a.printArray(arr,size);
        std::cout<<"\nWant to add more value ? :(y/n) "<<std::endl;
        std::cin>>ch;
    } while (ch!='n');
    
    

    do
    {
        std::cout<<"\nAt which index element delete ?";
        std::cin>>index;

        a.deletefrom(arr,size,index);


        std::cout<<"===After deletion in array ==="<<std::endl;
        a.printArray(arr,size);

        std::cout<<"\nWant to delete more value ? :(y/n) "<<std::endl;
        std::cin>>ch;
    } while (ch!='n');
    
     int w=0;
    do{
        std::cout<<"\nWant to search element in array (y/n)?:";
        std::cin>>ch;
       
        std::cout<<"\nWhich element ?"<<std::endl;
        std::cin>>element;
        w=a.linearSearch(arr,size,element);
        if(w == -1)
            std::cout<<"\nElement not found";
        else
        std::cout<<"Element found at index :"<<w;
    }
    while(ch!='n');
    
    
    int x=0;
    do{
        std::cout<<"\nWant to search element in array (y/n)?:";
        std::cin>>ch;
       
        std::cout<<"\nWhich element ?"<<std::endl;
        std::cin>>element;
        x=a.binarySeacrh(arr,0,size-1,element);
        if(x == -1)
        {
           std::cout<<"\nElement not found";
        }
        else
        {
        std::cout<<"Element found at index :"<<x;
        }
    }
    while(ch!='n');
    
   a.linearSort(arr,size);
    std::cout<<"\n"<<std::endl;
   a.printArray(arr,size);
    
   a.selectionSort(arr,size); 
   std::cout<<"\n"<<std::endl;
   a.printArray(arr,size);

    */
   a.insertionSort(arr,size); 
   std::cout<<"\n"<<std::endl;
   a.printArray(arr,size);

    return 0;
}