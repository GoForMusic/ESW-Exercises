#include <stdio.h>

void passByCopy(int a)
{
    a += 1;
}

void passByPointer(int *a)
{
    (*a) += 1; // De-reference then increment.
}

int main()
{
    int a = 0;
    // Passing by copy, creates a copy of the 'a' object, then sends it to the function.
    passByCopy(a);
    printf("%d",a); // Outputs 0
    
    // Passing by pointer, does almost the same thing as a pass by reference, except a 
    // pointer value can by NULL, while a reference can't.
    passByPointer(&a);
    printf("%d",a); // Outputs 2

    int *b, *c;
}