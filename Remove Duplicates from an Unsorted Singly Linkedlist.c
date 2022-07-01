/* Remove Duplicates from a Unsorted Singly Linkedlist */




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
    struct node *t,*last;
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
    p=first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void removeDuplicates(struct node *ptr)
{
    struct node *p,*q,*dup;
    p=first;
    while(p!=NULL&&p->next!=NULL)
    {
        q=p;
        while(q->next!=NULL)
        {
            if(q->data==q->next->data)
            {
                dup=q->next;
                q->next=q->next->next;
                free(dup);
            }
            else{
                q=q->next;
            }
        }
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,1,4,1,6,7,11,2,2,13,43,23,43,25};
    create(a,15);
    removeDuplicates(first);
    display(first);
}
