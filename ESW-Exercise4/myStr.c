﻿#include "myStr.h"

#include <stdlib.h>

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
    char *start = dest;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // add '\0' at the end
    return start;
}

char* my_strdup(const char* str)
{
    char* returnChar = malloc(sizeof(char));
        my_strcpy(&returnChar, &str);
    return returnChar;
}