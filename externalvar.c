#include<stdio.h>
#include<stdlib.h>
int main()
{
    extern char a[5];
    printf("My name is %s",a);
    return 0;
}
char a[5] ="Amit";
