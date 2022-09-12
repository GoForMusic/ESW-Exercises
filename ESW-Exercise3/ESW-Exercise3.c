#include <stdio.h>
#include <math.h>
#include <string.h>

#include "my_string_func.h"

#define MAX_LENGTH 1000

// exercise 1 using div and module for two interger and floats
void exe1()
{
    int a =7 ,b = 3;
    // for a/b int
    printf("%d \n", a/b);
    // for a%b int
    printf("%d \n",a%b);

    //but for float there is a problem and we can fix-it using a math.h lib

    double c=7,d=3;
    // for a/b flaot
    printf("%0.2f \n", c/d);
    // for a%b float need to use a different function because % it consider as binary operator
    printf("%0.2f \n",fmod(c,d));
}

//exercise 2 using char
void exe2()
{
    char text[] = "The quick brown fox jumps over lazy dog";
    char* endS = text + 39; /* Don't worry about this */
    printf ("The string now says: \"%s\n", text);
    *endS = '\0';
    printf ("The string now says: \"%s\n", text);
    // Repeat the following three lines in your own example, but experiment 
    // with different values than just subtracting 1 from endS

    // decrement the text[] by one character
    endS--;
    *endS = '\0';
    printf ("The string now says: \"%s\n", text);
}

//function to power an interger for ex3
int power(int x, int y)
{
    int response = 1;
    while(y > 0) {
        if(y % 2 == 1)
            response = response * x;
        x = x * x;
        y /= 2;
    }
    return response;
}

//function to swap 3 intergers for ex3
void multiSwap(int x, int y, int z)
{
    int temp = x;
    x = y;
    y = z;
    z = temp;

    printf("x = %d, y = %d, z = %d \n", x,y,z);
}

//ex3 to power and multiswap custom functions
void exe3()
{
    printf("%d \n", power(2,3));
    multiSwap(1,2,3);
}

//wokring more with strings
void exe4()
{
    char line[MAX_LENGTH];
    char upper[MAX_LENGTH]; // {'\0'} - to not show the memory
    int line_length;

    /* Use a while loop to read input lines as long as there are any.
     For each input line, print the length of the line as well as
     the upper case version of the line
     NOTE You are NOT allowed to use the standard toupper(…)
     function in string.h
     */
    while (1) {
        fgets(line,MAX_LENGTH,stdin);
        line_length = strlen(line);
        my_to_upper(&line,&upper);
        printf("Length: %d\t%s\n", line_length, upper);
    }

}

int main ()
{
    //exe1();
    //exe2();
    //exe3();
    exe4();
    return 0;
}