#include <stdio.h>
#include "myStr.h"

void testSTRDUP()
{
    char source[] = "GeeksForGeeks";
    char* target = my_strdup(source);
    printf("%s", target);
       
}

int main()
{
    //first function
    //printf("%d \n",my_strlen("Test"));
    //compare two strings
    //printf("%d \n",my_strcmp("Hello World","Hello World"));
    //printf("%d \n",my_strcmp("Hello World",""));
    //printf("%d \n",my_strcmp("",""));
    //printf("%d \n",my_strcmp("Hello World","Hello, World"));

    testSTRDUP();
    
    return 0;
}
