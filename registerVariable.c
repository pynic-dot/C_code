#include<stdio.h>
#include<stdlib.h>
int main()
{
    register int x;
    int y = 5;
    x = &y;
    printf("Address of y is %u and the value at y is %d", x,y);
    return 0;

}
