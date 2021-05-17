#include<stdio.h>
#include<stdlib.h>
unsigned long fact(int );
int  main()
{
unsigned int num1;
unsigned long totalfact;
printf("Enter the number for the factorial value:  ");
scanf("%ld",&num1);
totalfact = fact(num1);
printf("The factorial of %ld is : %lu",num1,totalfact);
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