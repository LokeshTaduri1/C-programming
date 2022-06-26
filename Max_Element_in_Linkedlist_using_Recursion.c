/* Maximum element in a Linkedlist using Recursion Technique */




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
    int x=0;
    if(p==0)   return INT_MIN;
    x=max(p->next);
    return x>p->data?x:p->data;
}
int main()
{
    int a[]={1,22,312,41,5};
    create(a,5);
    printf("%d ",max(first));
    return 0;
}
