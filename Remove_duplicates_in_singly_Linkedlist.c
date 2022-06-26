/* Removing duplicates in a Sorted Singly Linkedlist */





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
void remove(struct node *p)
{
    struct node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
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
int main()
{
    int a[]={1,2,3,3,4,4,5};
    create(a,7);
    remove(first);
    display(first);
    return 0;
}
