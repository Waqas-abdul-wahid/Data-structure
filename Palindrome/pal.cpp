#include "pal.h"

int String::length(std::string str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i - 1;
}
/*
int string::lenght1(std::string str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
        return i;
    }
}
*/
bool String::palindrome(char *array)
{
    int size = length(array);
    for (int i = 0; array[i] != '\0'; ++i)
    {
        if (array[i] > 64 && array[i] < 91)
            array[i] += 32;
        if (array[i] < 65 || array[i] > 90)
        {
            for (int k = i; array[k] != '\0'; ++k)
            {
                array[k] = array[k + 1];
                i = 0;
            }
        }
    }
    for (int i = 0, j = 0; array[i] != '\0'; ++i, ++j)
    {
        if (array[i] != array[j])
            return 0;
    }
    return 1;
}
