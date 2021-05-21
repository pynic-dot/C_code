#include<stdio.h>
int swap(int* ,int*);
int main()
{
    int a , b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a is %d and b is %d",a,b);
    return 0;
}

int swap(int* x, int* y)
{
    int t;
    t =*x;
    *x=*y;
    *y=t;
    return 0;
}