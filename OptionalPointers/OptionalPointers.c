#include <stdio.h>
#include <stdlib.h>

typedef struct Vector2
{
    int x,y;
} Vector2;

int main()
{
    Vector2* distance = malloc(sizeof(Vector2));
    Vector2* target = malloc(sizeof(Vector2));

    distance->x=9;
    distance->y=9;
    
    target->x=1;
    target->y=1;

    printf("x=%d, y=%d", distance->x-target->x, distance->y-target->y);

    free(distance);
    distance->x=9;
    distance->y=9;
    
    printf("x=%d, y=%d", distance->x, distance->y);
    
    
    return 0;
}