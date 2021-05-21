#include<stdio.h>
#include<stdlib.h>

int staticVar()
{
    static int x = 5;
    static int y = 10;
    printf("the value of x is : %d and y is : %d \n\n", x ,y);
    x++;
    y++;

}
int withoutstat()
{
    int i=5;
    printf("\nThe values of i is : %d\n",i);
    i++;
}

int main()
{
    for( int i = 0; i<4;i++)
    {

        staticVar();
        withoutstat();
    }
    return 0;
}
