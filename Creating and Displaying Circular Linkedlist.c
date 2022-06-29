/* Creating and Displaying Circluar Linkedlist */


// Method 1://


#include<stdio.h>
#include<stdlib.h>
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
void circ(struct node *p)
{
    struct node *q=NULL;
    while(p!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=first;
}
void display(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=first);
}
int main()
{
    int a[]={1,3,7,6,5,9};
    create(a,6);
    circ(first);
    display(first);
    return 0;
}


// Method 2 //



#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void create(int a[],int n)
{
    struct node *last,*t;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}
int main()
{
    int a[]={1,3,7,6,5,9};
    create(a,6);
    display(head);
    return 0;
}
