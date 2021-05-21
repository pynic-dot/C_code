#include<stdio.h>
int main()
{
    int a[5], *p;
    p =a;
    for(int i = 0;i<=4;i++)
    {
        scanf("%d",p+i);

    }
    for(int i = 0;i<=4;i++)
    {
        printf("%d\n", *(p+i));
    }
    return 0;
}