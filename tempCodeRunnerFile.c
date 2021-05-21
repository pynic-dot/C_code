#include<stdio.h>
int input(int*); 
int display(int*);
int sorting(int*);
int main()
{
    int a[5];
    input(a);
    display(a);
    sorting(a);
    return 0;
    
}

int input(int *x)
{
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%d",x+1);

    }
    return 0;

}

int display(int *x)
{
    int i;
    for(i = 0;i<=4;i++)
    {
        printf("%d",*(x+i));
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
            if(*(p+i)>*(p+i+1))
            {
                t = *(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1) = t;
            }
        }
    }
    return 0;
}