/* Inserting a new node in a linked list*/


#include<stdio.h>
#include<stdlib.h>
#include<climits>
struct node
{
    int data;
    struct node *next;
}*first=NULL;
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
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void insert(struct node *p,int index,int x)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            t->next=p->next;
            p->next=t;
        }
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(first,2,87);
    display(first);
    return 0;
}
