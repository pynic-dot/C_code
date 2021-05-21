#include<stdio.h>

struct date
{
    int d,m,y;
} d2;//1st way to define variable for struct date data type global variable

struct student
{

    int rollno;
    char name[20];
    int age;
}t1;
struct date d1;//2nd way to define struct date data type
int main()
{

    struct date today;// local variable for struct date data type
    struct date todaydate = {21,05,2021};
    struct student details = {21,'amit',25};

    printf("enter today's day date: ");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y);

    printf("\n%d\n",today.d);

    printf("%d\n%d\n%d\n",todaydate.d,todaydate.m, todaydate.y);


    printf("size of the student data type %d",sizeof(struct student));
    return 0;
}

