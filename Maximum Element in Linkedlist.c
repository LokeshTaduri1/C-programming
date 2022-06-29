/*Maximum Node/Element inside a Linkedlist */




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
int max(struct node *p)
{
    int m=INT_MIN;
    while(p)
    {
        if(p->data>m)  m=p->data;
        p=p->next;
    }
    return m;
}
int main()
{
    int a[]={1,22,31,41,5};
    create(a,5);
    printf("%d ",max(first));
    return 0;
}
