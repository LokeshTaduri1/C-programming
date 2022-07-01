/* Finding Kth Element from last */



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

void printNthFromLast(node* head, int k)
{
    int len = 0, i;
    struct node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    if (len < k)
        return;
    temp=head;
    for (i=1;i<len-k+1;i++)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
    return;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    create(a,9);
    printNthFromLast(first,4);
}
