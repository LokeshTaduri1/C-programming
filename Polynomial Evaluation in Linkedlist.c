/* Polynomial Evaluation Using a LinkedList /*

Example: If the polynomial is 6x3+4x3+3x+1 /*
If the value of x is 1 then the answer is 14, this can be evaluated using Linkedlist. */




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int coef;
    int exp;
    struct node *next;
}*poly=NULL;
void create()
{
    struct node *t,*last;
    int num;
    printf("ENter the no.of terms \n");
    scanf("%d",&num);
    printf("Enter each term \n");
    for(int i=0;i<num;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d",&t->coef,&t->exp);
        t->next=NULL;
        if(poly==NULL)
        {
            poly=last=t;
        }
        else{
            last->next=t;
            last=t;
        }
    }
}

int evaluate(struct node *p,int x)
{
    int value=0;
    while(p!=NULL)
    {
        value+=p->coef*pow(x,p->exp);
        p=p->next;
    }
    return value;
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%dx%d+",p->coef,p->exp);
        p=p->next;
    }
}
int main()
{
    create();
    display(poly);   
    printf("= %d ",evaluate(poly,1));
    return 0;
}
