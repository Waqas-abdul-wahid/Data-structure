#include"pal.h"

int main()
{
    String a;
     char array[]="A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!";
/*    a.palindrome(array);
    std::cout<<"array"<<array; */

    if(a.palindrome(array))
        std::cout<<"Palindrome"<<std::endl;
    else
    {
        std::cout<<"Not a palimdrome"<<std::endl;
    }
    
    return 0;
}