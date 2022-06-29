/* Merging two sorted singly LinkedLists */




#include<stdio.h>
#include<stdlib.h>
#include<climits>

struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

void merge(struct node *p,struct node *q)
    
{
    struct node *last;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p&&q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)   last->next=q;
    if(q)   last->next=q;
}

int main()
    
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    create(a,5);
    create1(b,5);
    merge(first,second);
    display(first);
    return 0;
}
