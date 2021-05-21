#include<stdio.h>
int input(int*);
int sorting(int*);
int display(int*);

int main()
{
    int a[5];
    input(a);
    sorting(a);
    display(a);

    return 0;

}

int input(int *x)
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter number: ");
        scanf("%d",x+i);

    }

    return 0;
}

int display(int *x)
{
    int i;
    for(i = 0;i<4;i++)
    {
        printf("%d\n",*(x+i));
    }
    return 0;
}


int sorting(int *p)
{
    int round, t, i;
    for(round = 1;round<=4;round++)
    {
        for(i =0;i<=3;i++)
        {
            if(*(p+i)>*(p+i+1))            {
                t = *(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1) = t;
            }
        }
    }
    return 0;
}
