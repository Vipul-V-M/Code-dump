#include<stdio.h>
#include<stdlib.h>

typedef struct stud
{
    char name[20];
    int rollno;
    struct stud *next;
}NODE;

NODE *create_node(void)
    {
        NODE *t=NULL;
        t=(NODE *)malloc(sizeof(NODE));
        if(t==NULL)
        {
        printf("INSUFFICIENT MEMORY\n");
        return 0;
        }
        t->next=t;
        return t;
    }

NODE *read(NODE *t)
{
    printf("Enter details of student:");
    scanf("%s%d",&t->name,&t->rollno);
    return t;
}
NODE *insert_front(NODE *head,NODE *t)
{
    if(head==NULL)
        head=t;
    else
    {
        NODE *cur=head;
        while(cur->next!=head)
            cur=cur->next;
        cur->next=t;
        t->next=head;
        head=t;
    }
    return head;
}

void display(NODE *head)
{
    NODE *cur=head;
    if(head==NULL)
        printf("No students entered\n");
    else
    {
        printf("The name and roll no are:\n");
        do
        {
            printf("%s %d\n",cur->name,cur->rollno);
            cur=cur->next;
        }while(cur!=head);
    }
}

NODE *insert_end(NODE *head,NODE *t)
{
    if(head==NULL)
        head=t;
    else
    {
        NODE *cur=head;
        while(cur->next!=head)
            cur=cur->next;
        cur->next=t;
        t->next=head;
    }
    return head;
}

int count(NODE *head)
{
    if(head==NULL)
        return 0;
    NODE *cur=head;
    int cnt=0;
    do
    {
        cur=cur->next;
        cnt++;
    }while(cur!=head);
    return cnt;
}

NODE *delete_front(NODE *head)
{
    if(head==NULL)
        printf("The list is empty\n");
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else{
        NODE *cur=head,*temp=head;
        while(cur->next!=head)
            cur=cur->next;
        cur->next=head->next;
        head=head->next;
        free(temp);
    }
    return head;
}

NODE *delete_end(NODE *head)
{
    if(head==NULL)
        printf("The list is empty\n");
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else{
        NODE *cur=head,*prev=NULL;
        while(cur->next!=head)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=head;
        free(cur);
    }
    return head;
}

NODE *delete_specific(NODE *head)
{
    int pos;
    int cnt=count(head);
    printf("\nEnter the position to be deleted: ");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("Empty list\n");
        return 0;
    }
    if(pos==1)
    {
        if(head->next==head)
        {
            free(head);
            head=NULL;
        }
        else
        {
            NODE *cur=head,*temp=head;
            while(cur->next!=head)
                cur=cur->next;
            cur->next=head->next;
            head=head->next;
            free(temp);
        }
    }
    else
    {
        NODE *cur=head,*prev=NULL;
    for(int i=1;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=cur->next;
    free(cur);
    }
    return head;
}


int main()
{
    NODE *head=NULL;
    NODE *t=NULL;
    int o,cnt;
    while(1)
    {

    printf("Enter required option:\n1.Insert front\n2.Insert end\n3.Display \n4.No. of students\n5.Insert at position\n6.Delete front\n7.Delete end\n8.Delete specific position\n0.Exit\n");
    scanf("%d",&o);
        switch(o)
        {
            case 1:t=create_node();
            t=read(t);
            head=insert_front(head,t);
            break;
            case 3:display(head);
            break;
            case 2:t=create_node();
            t=read(t);
            head=insert_end(head,t);
            break;
            case 4:cnt=count(head);
            printf("Number of students=%d\n",cnt);
            break;
            case 5:break;
            case 6:head=delete_front(head);
            break;
            case 7:head=delete_end(head);
            break;
            case 8:head=delete_specific(head);
            break;
            case 0:exit(0);
            default:printf("Enter valid option\n");
        }
    }
    return 0;
}
