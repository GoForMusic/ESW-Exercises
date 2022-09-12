#include "myStr.h"

int my_strlen(const char* str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

int my_strcmp(const char* str1, const char* str2)
{
    for (int i = 0; ; i++)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] < str2[i] ? -1 : 1;
        }

        if (str1[i] == '\0')
        {
            return 0;
        }
    }
}

char* my_strcpy(char* dest, const char* src)
{

    return dest;
}

char* my_strdup(const char* str)
{
    return str;
}