
#include<stdio.h>

struct book input();
void display(struct book);
struct book
{

    int book_id;
    char title[20];
    float price;
};

int main()
{
        struct book b1;
        b1=input();
        display(b1);
    return 0;
}

struct book input()
{
    struct book b;
    printf("Enter book id:");
    fflush(stdin);
    scanf("%d",&b.book_id);
    fflush(stdin);
    printf("Enter book title:");
    gets(b.title);
    fflush(stdin);
    printf("Enter book price:");
    scanf("%f",&b.price);
    return (b);

}

void display(struct book b)
{

    printf("\n%d %s %f",b.book_id,b.title,b.price);
}
