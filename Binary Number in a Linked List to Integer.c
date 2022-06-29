/*  Convert Binary Number in a Linked List to Integer
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.  */


#include<stdio.h>
#include<stdlib.h>
#include<climits>
struct ListNode
{
    int val;
    struct ListNode *next;
}*head=NULL;
void create(int a[],int n)
{
    struct ListNode *t,*last;
    head=(struct ListNode *)malloc(sizeof(struct ListNode));
    head->val=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=(struct ListNode *)malloc(sizeof(struct ListNode));
        t->val=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int getDecimalValue(struct ListNode* head){
    struct ListNode *ptr=NULL;
    int a[10],i=0,k=0;
    ptr=head;
    while(ptr!=NULL)
    {
        a[i]=ptr->val;
        ptr=ptr->next;
        k = 10 * k + a[i];
        i++;
    }
    int ans=0,x=1;
    while(k>0)
    {
        int y=k%10;
        ans+=x*y;
        x*=2;
        k/=10;
    }
    return ans;

}
int main()
{
    int a[]={1,0,1,0,0};
    create(a,5);
    printf("%d",getDecimalValue(head));
    return 0;
}
