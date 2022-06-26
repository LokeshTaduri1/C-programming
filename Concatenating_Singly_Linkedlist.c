/* Concatenating two Singly LinkedLists */




#include<stdio.h>
#include<stdlib.h>
#include<climits>
struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL;
void create(int a[],int n)
{
    struct node *last,*t;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create1(int b[],int m)
{
    struct node *last,*t;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=b[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<m;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=b[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void concat(struct node *p,struct node *q)
{
    p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    second=NULL;
}

int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    create(a,5);
    create1(b,5);
    concat(first,second);
    display(first);
    return 0;
}
