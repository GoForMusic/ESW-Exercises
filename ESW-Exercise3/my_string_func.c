#include <stdio.h>
#include "my_string_func.h"

#include <ctype.h>
#include <string.h>

/* read_line: read a line into s, return length */
int read_line(char s[])
{
    int c = 0;
    int i = 0;
    int done = 0;
    do
    {
        c = getchar();
        if (c == EOF || c == '\n')
        {
            done = 1;
        }
        else
        {
            s[i++] = c;
        }
    } while (!done);
    s[i] = '\0';
    return i;
}
void my_to_upper(char* str_in, char* str_out)
{
    *str_out=*str_in;
    /* You must implement your own version of toupper using the two strings
     str_in and str_out.
     Loop over the str_in (as long as it "contains" something).
     Look at the "current" character and check if its a lowercase letter. 
     If it is, convert it to the upper case version and add that to the
     str_out character array 
    */
    for(int i=0;i<strlen(str_in);i++)
    {
        if((str_in[i] >= 'a') && (str_in[i] <= 'z'))
        {
            str_out[i] = str_in[i] - 32;
        }
    }
    
}