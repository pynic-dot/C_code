#include<stdio.h>
int main()
{
    int x =5, *j;
    j = &x;
    printf("%d %u\n",x,j); //5 address of x
    printf("%d %u\n",*j,&x); //5 and address of x
    printf("%u",*&j); // addresso of x
    printf("\n%u",&j);
    return 0;
}