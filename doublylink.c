#include<stdio.h>
struct node{
    int info;
    struct node *prev, *next;
};
struct node* start = NULL;
void insertAsfirstNode()
{   struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    printf("Enter a Number");
    scanf("%d", &n->info);
    n->prev = NULL;
    n->next = NULL;
    if(start ==NULL)
    {
        start = n;

    }
    else{
        start->prev =n;
        n->next = start;
        start=n;

    }
}

void deleteFirstNode()
{
    struct node *r;
    if(start ==NULL)
    {
        printf("List is empty");

    }
    else
    {
        r = start;
        start = start->next;
        start ->prev =NULL;
        free(r);
    }
}

void viewlist()
{
    struct node *t;
    if(start == NULL)
    {
        printf("List is empty");

    }
    else
    {
        t = start;
        while(t->next!=NULL)
        {
            printf("%d",t->info);
            t = t->next;
        }

    }
}