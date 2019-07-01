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

list::list()
{
    arr = new int[10];
    current = 1;
    size = 10;

    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

list::list(int arrsize)
{
    arr = new int[arrsize];
    current = 1;
    size = arrsize;

    for (int i = 0; i < size; ++i)
    {
        arr[i] = 0;
    }
}

void list::printList()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Your list item is " << i << "=" << arr[i];
        std::cout << std::endl;
    }
}

int list::getcurrent()
{
    return current;
}

void list::insert(int element, int index)
{
    if (current > size)
        return;
    if (index > current)
        return;
    if (index < 1 || index > size)
        return;

    for (int i = current; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    current++;
}
void list::Deletefrom(int index)
{
    if (current > size)
        return;
    if (index > current)
        return;
    if (index < 1 || index > size)
        return;

    for (int i = index; i < current; i++)
    {
        arr[i] = arr[i + 1]; /* code */
    }
    current--;
}

void list::clearlist()
{
    for (int i = current; i > 1; i--)
    {
        arr[i - 1] = arr[0];
    }
}


int main()
{
    list *List = new list(10);

    List->printList();

    List->insert(4,1);
    List->insert(7,2);
    List->insert(8,3);
    List->insert(6,4);
    List->insert(85,5);
  
    std::cout<<std::endl<<"list after insertion"<<std::endl;

   List-> printList();

   List->Deletefrom(3);

    std::cout<<std::endl<<"\nlist after delete"<<std::endl;

   List-> printList();

   List->clearlist();

    std::cout<<std::endl<<"list after clearance"<<std::endl;
 
    List ->printList();

    

    return 0;
}