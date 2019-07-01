#include<iostream>
#include"Node.h"

class linklist
{
    private:

        Node *head;

    public:
        linklist();
        
        ~linklist()
        {}

        void insertFirst(int data);
        void traverselist();
		void insertlast(int data);

};
