#include<stdio.h>
#include<stdlib.h>

 int main()
 {
     int *a;
     float *p;
     double *q;

// malloc function returns the address of the the memory block
// and the created memory block don't have any name
//type of return type with malloc is void
// we do type casting
     p = (float*)malloc(4); //only one argument pass size of variable( not data type)
     printf("Enter a float Number: ");
     scanf("%f",p);
     printf("%f",*p);

//calloc() in the calloc we pass two argument
//1st one is : number of variable require
//2nd number of by require for each block
     a = (int*)calloc(2,4);

     printf("\n\nEnter two Integer Number: ");
     scanf("\n%d\n%d",a,a+1);
     printf("%d %d",*a,*(a+1));

//realloc
//syntax void* realloc(void* block,int size);
   // q=realloc(p,8);

   free(a);
   free(p);
     return 0;


// free function
//
 }
