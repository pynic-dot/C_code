#include<stdio.h>
int main()
{
    int x = 5,*p,**q;
    p = &x;
    q = &p;
    printf("%d",sizeof(int));
    return 0;

}