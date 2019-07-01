#include"string.cpp"

int main()
{
    std::string name,name2,name1,str1,ptrn;
    String s;
   /*
    std::cout<<"Enter the name :"<<std::endl;
    getline(std::cin,name);
    std::cout<<"\nThe length of string is:"<<s.stringlength(name);

    std::cout<<"\nEnter the first name :"<<std::endl;
    getline(std::cin,name1);

    std::cout<<"\nEnter the second name :"<<std::endl;
    getline(std::cin,name2);

    std::cout<<"\nThe concate value is "<<" "<<s.concat(name1,name2);
    */
    std::cout<<"\nEnter the strings value :"<<std::endl;
    getline(std::cin,str1);

    std::cout<<"\nEnter the strings matching pattern value :"<<std::endl;
    getline(std::cin,ptrn);

    std::cout<<"\n strings value are :"<<s.find(str1,ptrn)<<std::endl;


    return 0;
}

