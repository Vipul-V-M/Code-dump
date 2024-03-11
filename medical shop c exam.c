#include<stdio.h>
#include<stdlib.h>

typedef struct customer
{
    char name[10];
    int age;
    float amt;
    struct customer *next;
}NODE;

NODE *create_node()
    {
        NODE *t;
        t=(NODE*)malloc(sizeof(NODE));
        if(t==NULL)
        {
        printf("Insufficient memory\n");
        return 0;
        }
        t->next=NULL;
        return t;
    }

void *read(NODE *t)
    {
        printf("Enter name: ");
        scanf("%s",&t->name);
        printf("Enter age: ");
        scanf("%d",&t->age);
        printf("Enter amount: ");
        scanf("%f",&t->amt);
    }

NODE  *insert_end(NODE *head,NODE *t)
    {
        if(head==NULL)
        {
            head=t;
        }
        else
        {
            NODE *cur;
            cur=head;
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=t;
            t->next=NULL;
         }
         return head;
    }

int count(NODE *head)
{
    int x=0;
    NODE *cur=head;
    while(cur!=NULL)
    {
        if(cur->amt<=1200||cur->age<=60)
            x++;
        cur=cur->next;
    }
    return x;
}


float total_amount(NODE *head)
{
    float total=0,disc;
    NODE *cur=head;
    while(cur!=NULL)
    {
        if(cur->age<=60)
            total+=cur->amt;
        else if(cur->age>60&&cur->amt<=1200)
            total+=cur->amt;
        else{
            disc=cur->amt*(12.5/100);
            total+=(cur->amt-disc);
        }
        cur=cur->next;
    }
    return total;
}

void display(NODE *head)
{
    if(head==NULL)
    {
        printf("No customers\n");
        return;
    }
    NODE *cur=head;
    printf("The customer details are:\nName\tAge\tAmount\n");
    while(cur!=NULL)
    {
        printf("%s\t%d\t%.2f\n",cur->name,cur->age,cur->amt);
        cur=cur->next;
    }
    return;
}

int main()
{
    NODE *head=NULL;
    NODE *t=NULL;
    int x,ch;
    float ttl_amt;
    while(1)
    {
        printf("Enter the choice:\n");
        printf("1.Add customer to the list\n");
        printf("2.Number of customers who have not availed discount\n");
        printf("3.Total amount collected by the shop today\n");
        printf("4.Display all customer details\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                t=create_node();
                read(t);
                head=insert_end(head,t);
                break;
            case 2:
                x=count(head);
                printf("Number of customers who have not availed discount = %d\n",x);
                break;
            case 3:
                ttl_amt=total_amount(head);
                printf("Total amount collected by the shop today = %.2f\n",ttl_amt);
                break;
            case 4:
                display(head);
                break;
            default:
                exit(0);

        }
    }
    return 0;
}
