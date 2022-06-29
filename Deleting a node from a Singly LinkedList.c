/*Deleting a node from a Singly LinkedList*/



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
void delet(struct node *p,int pos)
{
    struct node *q;
    if(pos==1)
    {
        p=first;
        first=first->next;
        free(p);
    }
    else{
        p=first;
        q=NULL;
        for(int i=0;i<pos-1&&p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            free(p);
        }
    }

}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    delet(first,2);
    display(first);
    return 0;
}
