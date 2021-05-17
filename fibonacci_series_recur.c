#include<stdio.h>
int s;
int fabno(int);
int main()
{
    int a=1,b=1,i =8;
    printf("%d",fabno(i));
    return 0;
}
// 1 1 2 3 5 8 13
int fabno(int i)
{
   if(i == 1 || i ==2){
       return (1);
   }
   else{
       s= fabno(i-1)+fabno(i-2);
       return (s);
   }
   
}