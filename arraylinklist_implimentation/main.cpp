
#include"list.h"

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