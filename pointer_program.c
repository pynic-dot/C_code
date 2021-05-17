#include<stdio.h>
int main()
{
    int a = 5, z = 4;
    int *b;
    int **e;
    b = &a;
    e = &b;
    // printf("%d\n",a);
    // printf("%u\n",&a);
    // printf("%d\n", *(&a));
    // printf("%d",*b);
    printf("%d\n",*b);
    printf ("%d\n",b);
    printf("%d\n",e);
    printf("%d\n",**e);
    return 0;   
}