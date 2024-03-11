#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char name[20];
    char usn[20];
    int roll;
    struct student *next;
}NODE;

NODE *create_node()
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("Insufficient memory\n");
        return 0;
    }
    temp->next=NULL;
    return temp;
}

NODE *read_details(NODE *t)
{
    printf("Enter the details of student\n");
    scanf("%s %s %d",t->name,t->usn,&t->roll);
    return t;
}

NODE *insert_front(NODE *head,NODE *t)
{
    if(head==NULL)
        head=t;
    else
    {
    t->next=head;
    head=t;
    }
    return head;
}

void display(NODE *head)
{
    if(head==NULL)
        printf("List is empty");
    else
    {
    NODE *cur;
    cur=head;
    printf("Name    USN    Rollno\n");
    while(cur!=NULL)
    {
        printf("%s   %s   %d\n",cur->name,cur->usn,cur->roll);
        cur=cur->next;
    }
    }
    return;
}

NODE *insert_end(NODE *head,NODE *t)
{
    if(head==NULL)
        head=t;
    else
    {
        NODE *cur=head;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next=t;
    }
    return head;
}

void count(int cnt)
{
    if(cnt==0)
        printf("No students entered\n");
    else
    printf("Number of students=%d\n",cnt);
}

int search(NODE *head)
{
    char n[20];
    printf("Enter student name: ");
    scanf("%s",n);
    if(head==NULL)
        printf("No students in list");
    else
    {
        NODE *cur;
        cur=head;
        while(cur!=0)
        {
            if(strcmp(cur->name,n)==0)
                return 1;
            cur=cur->next;
        }
        return 0;
    }
}
int main()
{
    int n,x;
    NODE *head=NULL;
    NODE *t;
    int cnt;
    while(1)
    {
    printf("\nEnter the required option\n1.Enter details infront\n2.Enter deatails at end\n3.Display\n4.No of students\n5.Search for student\n0.Exit\n");
    scanf("%d",&n);
    switch(n)
    {

        case 0:exit(0);
        case 1:t=create_node();
            t=read_details(t);
            head=insert_front(head,t);
            cnt++;
            break;
        case 2:t=create_node();
            t=read_details(t);
            head=insert_end(head,t);
            cnt++;
            break;
        case 3:display(head);
            break;
        case 4:count(cnt);
            break;
        case 5:x=search(head);
            if(x==1)
                printf("Student found\n");
            else
                printf("Student not found\n");
            break;
        case 6:printf("Enter the position to be inserted");
            scanf("%d",&pos);
            if(pos>=1&&pos<=cnt+1)
            {
                t=create_node();
                t=read_details(t);
                head=insert_position(head,t,pos,cnt);
            }
            else
                printf("Enter valid position");
            break;
        default:printf("Enter valid option");
            break;
    }
    }
    return 0;
}
