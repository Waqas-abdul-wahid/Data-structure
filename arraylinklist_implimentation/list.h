#include<iostream>
 class list
 {
     private:
        int size;
        int current;
        int *arr;
     public:
     list();
      
     list(int size);
   
    void printList();

    int getcurrent();

    //for insertion
    void insert(int element,int index);

    void Deletefrom(int index);

    void clearlist();

 };