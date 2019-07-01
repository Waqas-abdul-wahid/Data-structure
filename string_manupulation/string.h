#ifndef STRING_H
#define STRING_H
#include<iostream>
#include<string>

class String
{
    private:

    public:
    int length(std::string str);
    std::string concatstrings(std::string str1,std::string str2);
    std::string concat(std::string str1,std::string str2);
    int find(std::string str,std::string p );
    void insert(std::string str,std::string p);
    void delete(std::string);
    int replace(std::string );
};
#endif
