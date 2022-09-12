#include <stdio.h>

#include "myStr.h"

int main()
{
    //first function
    printf("%d \n",my_strlen("Test"));
    //compare two strings
    printf("%d \n",my_strcmp("Hello World","Hello World"));
    printf("%d \n",my_strcmp("Hello World",""));
    printf("%d \n",my_strcmp("",""));
    printf("%d \n",my_strcmp("Hello World","Hello, World"));
    return 0;
}
