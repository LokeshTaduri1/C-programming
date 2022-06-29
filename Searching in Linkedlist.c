/* Searching in a Singly Linkedlist */




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
int search(struct node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)  return 1;
        p=p->next;
    }
    return 0;
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    printf("%d ",search(first,5));
    return 0;
}
