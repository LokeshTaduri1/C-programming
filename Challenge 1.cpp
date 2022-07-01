/* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself. */




#include<stdio.h>
#include<stdlib.h>
#include<climits>
#include<iostream>
using namespace std;

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

void create3(int a[],int n)
{
    struct node *last,*t;
    third=(struct node *)malloc(sizeof(struct node));
    third->data=a[0];
    third->next=NULL;
    last=third;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void getDecimalValue(struct node* first,struct node *second)

{
    struct node *ptr1=NULL;
    int a[10],i=0,k=0,p=0,b[10];
    ptr1=first;
    while(ptr1!=NULL)
    {
        a[i]=ptr1->data;
        ptr1=ptr1->next;
        k = 10 * k + a[i];
        i++;
    }
    int rem=0,rev=0;
    while (k!= 0)
    {
        rem= k%10;
        rev= rev*10+rem;
        k/=10;
    }
    struct node *ptr2=second;
    i=0;
    
    while(ptr2!=NULL)
    {
        b[i]=ptr2->data;
        ptr2=ptr2->next;
        p=10*p+b[i];
        i++;
    }
    rem=0;
    int rev1=0;
    while (p!=0)
    {
        rem=p%10;
        rev1=rev1*10+rem;
        p/=10;
    }
    int y=rev+rev1;
    i=0;
    int l[10];
    while(y!=0)
    {
        l[i]=y%10;
        y/=10;
        i++;
    }
    create3(l,i);
}

int main()
    
{
    int a[]={2,9,2};
    int b[]={9,1,9};
    create(a,3);
    create1(b,3);
    getDecimalValue(first,second);
    display(third);
    return 0;
}
