#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    char name[20];
    int roll;
    struct student *next;

}NODE;
NODE * create()
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    temp->next=NULL;
    return temp;
}
void  read (NODE *t)
{
    printf("enter the name and roll number\n");
    scanf("%s%d",t->name,&t->roll);
    return;
}
void display(NODE *head)
{
    NODE *cur;
    cur =head;
    if(cur==NULL)
    {
        printf("list is empty\n");
        return ;
    }
    while (cur!=NULL)
    {
        printf("%s %d \n",cur->name,cur->roll);
        cur = cur->next;
    }
    return;
}
NODE *insert_front(NODE *head,NODE *t1)
{
    if(head==NULL)
    {
        head=t1;
    }
    else
    {
        t1->next=head;
        head=t1;
    }
    return head;
}
NODE * init(NODE *head)
{
    head=NULL;
    return head;
}
NODE *insertend(NODE *head,NODE *t)
{
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        NODE*cur;
        for(cur=head;cur->next!=NULL;cur=cur->next);
        cur->next=t;
    }
    return head;
}
int count(NODE* head)
{
    int count=0;
    NODE *cur=head;
    while(cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    return count;
}
int search(NODE *head,char stud[20])
{
    NODE *cur=head;
    while(cur!=NULL)
    {
        if(strcmp(cur->name,stud)==0)
        return 1;
        cur=cur->next;
    }

    return 0;
}

int main()
{
    NODE *t1;
    NODE *head;
    int ch,flag;
    int nodes;
    char stud[20];
    head=init(head);


    while(1)
    {
        printf("enter choice:- 1->insert front \n               2->display list\n               3->insert rear \n               4->count no of nodes\n               5->search\n               0->exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :    t1=create();
                        read(t1);
                        head=insert_front(head,t1);
                        break;
            case 2:     display(head);
                        break;
            case 3:     t1=create();
                        read(t1);
                        head=insertend(head,t1);
                        break;
            case 4:     nodes=count(head);
                        printf("no of nodes =%d\n",nodes);
                        break;
            case 5:     if(head==NULL)
                        {
                            printf("the list is empty\n");
                            break;
                        }
                        else
                        {
                            printf("enter the student to be searched\n") ;
                            scanf("%s",stud);
                            flag=search(head,stud);
                            if(flag==0)
                            printf("name not found\n");
                            else
                            printf("name found\n");
                            break;
                        }

            case 0:exit(0);
        }
    }
}
