/* Palindrome Number */




#include<stdio.h>
#include<stdlib.h>
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

void isplalindrome(struct node *p)
{
    p=first;
    int b[100],i=0,k=0;
    while(p!=NULL)
    {
        b[i]=p->data;
        p=p->next;
        k=10*k+b[i];
        i++;
    }
    int rev=0,rem=0,t=k;
    while (k!=0)
    {
        rem=k%10;
        rev=rev*10+rem;
        k/=10;
    }
    if(t==rev)  printf("Palindrome Number");
    else  printf("Nopeee");
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


int main()
{
    int a[]={1,1,1,3,2,3,1,1,1};
    create(a,9);
    isplalindrome(first);
}
