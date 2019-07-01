#include"data.h"

void Data::openfile()
{
    char char1;
    char char2;
    std::cout<<"What charater do you want to replace from file"<<std::endl;
    std::cin>>char1;


    std::cout<<"What charater do you want to place  in  file"<<std::endl;
    std::cin.ignore();
    std::cin>>char2;

    std::fstream file;
    char ch;
    int w=0;
    file.open("Sample Data.csv");
    if(!file.is_open())
    {
        std::cout<<"unable to open the file"<<std::endl;
    }
    while(file>>std::noskipws>>ch)
    {
        w++;
    }
    file.close();
    char* a=new char[w];
    w=0;
    file.open("Sample Data.csv");
    while(file>>std::noskipws>>ch)
    {
        a[w]=ch;
        w++;
    }
    for(int i=0;a[i]!='\0';++i)
    {
        if(a[i]==char1)
            a[i] = char2;
    }

    std::ofstream file2;
    file2.open("newChangefile.csv");
    
    for(int j=0;a[j]!='\0';++j)
    {
        file2<<a[j];
    }
    

}

