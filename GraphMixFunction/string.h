#include<iostream>
#include<stdlib.h>

class string
{
private:
    
public:
  
    string();
    ~string();

    int* createArray(int);
    void insertAt(int *,int ,int ,int );
    void deletefrom(int* ,int ,int );
    void printArray(int *,int );
    
    int linearSearch(int *,int ,int);
    int binarySeacrh(int *,int ,int ,int element);
    void bubbleSort(int *,int); 
    void selectionSort(int* ,int);
    void insertionSort(int* ,int );
    int lengthString(std::string);
    
    void linearSort(int*,int);
};

