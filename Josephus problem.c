#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct player
{
    char name[20];
    int n;
    struct player *next;
}NODE;

NODE *read_details(void)
{
    NODE *temp=NULL;
    temp=(NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("Insufficient memory");
        return NULL;
    }
    printf("Enter name and the number chosen: ");
    scanf("%s %d",temp->name,&temp->n);
    return temp;
}

NODE *insert_end(NODE *head,NODE *temp)
{
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
    }
    else if(head->next==head)
    {
        head->next=temp;
        temp->next=head;
    }
    else
    {
        NODE *cur=head;
        while(cur->next!=head)
            cur=cur->next;
        cur->next=temp;
        temp->next=head;
    }
    return head;
}

NODE *delete_node(NODE *head,NODE *cur,NODE *prev)
{
    NODE *temp=NULL;
    if(head==NULL)
    {
    printf("NO players");
    exit(0);
    }
    else if(cur==head)
    {
        temp=cur;
        prev->next=cur->next;
        head=cur->next;
    }
    else
    {
        temp=cur;
        prev->next=cur->next;
    }
    return temp;
}

void traverse_till_winner(NODE *head,int x)
{
    NODE *cur=head;
    NODE *temp=NULL;
    NODE *prev=NULL;
    for(int i=1;i<x;i++)
    {
        prev=cur;
        cur=cur->next;
    }
    temp=delete_node(head,cur,prev);
    printf("%s\n",temp->name);
    while(head->next!=head)
    {
        cur=temp->next;
        x=temp->n;
        for(int i=1;i<x;i++)
        {
            prev=cur;
            cur=cur->next;
        }
        temp=delete_node(head,cur,prev);
        printf("%s\n",temp->name);
    }
    printf("%s is the winner",temp->next->name);
    exit(0);
}

int main()
{
    NODE *head=NULL;
    NODE *temp=NULL;
    int p;
    int x;
    printf("Enter number of players: ");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        temp=read_details();
        head=insert_end(head,temp);
    }
    printf("Enter number to start the game: ");
    scanf("%d",&x);
    traverse_till_winner(head,x);
    return 0;
}
