#include<stdio.h>
int main()
{
    int a = 1, b =1, z,s,i ;
    // 1 1 2 3 5
    printf("Enter the fibonacci series number : ");
    scanf("%d",&i);
    printf("%d %d",a,b);
    for (z = 1;z<=i;z++)
    {
        s = a+b;
        printf(" %d ",s);
        a=b;
        b=s;
    }
return 0;
}