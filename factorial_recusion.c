#include<stdio.h>
#include<stdlib.h>
unsigned long fact(int );
int  main()
{
int num;
unsigned long totalfact;
printf("Enter the number for the factorial value:  ");
scanf("%d",&num);
totalfact = fact(num);
printf("The factorial of %d is : %lu",num,totalfact);
return 0;
}

unsigned long fact(int num)
{
if (num>0){
    return(num * fact(num - 1));}
else{
    return (1);
}

}
