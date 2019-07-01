#include"string.h"

int String::length(std::string str)
    {
        int length=0;
        while(str[length]!='\0')
            length=length+1;
        return length;
    }

std::string String::concat(std::string str1,std::string str2)
{
    int length1=0,length2=0;
    std::string str3;
    while(str1[length1]!='\0')
    {
        str3+=str1[length1];
        ++length1;
    }
    while(str2[length2]!='\0')
    {
        str3+=str2[length2];
        ++length2;
    }
    return str3;
}

int String::find(std::string str,std::string p)
{
    int k=length(str);
    int l=length(p);
    int i,j;

        for(i=1;i<k;i++)
            for(j=1;j<l;j++)
            if(p[j]!=str[i+j-1])
            break;
            if(j==l+1)
                return i;
            return -i;
}

/*
std::string String::concatstrings(std::string str1,std::string str2)
{
    std::string str3;

    str3=str1+str2;

    return str3;
}
*/
void Stirng::insert(std::string str,std::string p,int pos)
{
    concat(concat(find(str,p),str),find(str,p);
}
void String::delete(std::string)
{
}
int String::replace(std::string )
{
}