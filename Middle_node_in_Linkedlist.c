*/ Middle Node in a LinkedList */


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
void middle(struct node *p)
{
    struct node *q;
    p=q=first;;
    while(q!=NULL)
    {
        q=q->next;
        if(q)  q=q->next;
        if(q)  p=p->next;
    }
    printf("Middle Node is %d",p->data);
}

int main()
{
    int a[]={1,3,5,7,9};
    create(a,5);
    middle(first);
    return 0;
}
