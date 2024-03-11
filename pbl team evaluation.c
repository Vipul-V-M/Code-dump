#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct candidate
{
    char name[20];
    char deg[20];
    float score;
    int year;
    int age;
    struct candidate *next;
    struct candidate *prev;
}NODE;


NODE *create_node()
{
    NODE *t;
    t=(NODE*)malloc(sizeof(NODE));
    if(t==NULL)
        printf("Insufficent memory");
    else
    {
      t->next=NULL;
      t->prev=NULL;
    }
    return t;
}
NODE *read(NODE *t)
{    printf("Enter the details\n");
     scanf("%s %s %f %d %d",t->name,t->deg,&t->score,&t->year,&t->age);
//if(t->age>28 || t->year!=2021 ||t->year!=2022)


      return t;
}


NODE *insert_end(NODE *head,NODE *t)
{
    if(head==NULL)
        head=t;
    else
    {
        NODE *cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=t;
        t->prev=cur;
    }
    return head;
}


void display(NODE *head)
{
    if(head==NULL)
    {
        printf("Empty list");
    }
    else
    {
        NODE *cur=head;

        while(cur!=NULL)
        {
            printf("%s %s %.2f %d %d\n",cur->name,cur->deg,cur->score,cur->year,cur->age);
            cur=cur->next;
        }
    }
}


NODE *del_spec(NODE *head)
{
    if(head==NULL)
    {
        printf("Empty list");
    }
    else if(head->next==NULL)
    {
        if(head->score<94)
        {
            free(head);
            head=NULL;
        }
        return head;
    }
    else
    {
        NODE *cur=head,*t=NULL;
        while(cur->next==NULL)
        {
            if(head->score<94)
            {
                t=head;
                head=head->next;
                head->prev=NULL;
                free(t);
            }
            else if(cur->score<94)
            {
                cur->prev->next=cur->next;
                cur->next->prev=cur->prev;
                free(cur);
            }
            cur=cur->next;
        }
    }
}

void display_f(NODE *head,int x)
{
    NODE *cur=head;
    for(int i=0;i<2*x;i++)
    {
        printf("%s %s %.2f %d %d\n",cur->name,cur->deg,cur->score,cur->year,cur->age);
            cur=cur->next;
            if(cur->next==NULL)
            {
                printf("%s %s %.2f %d %d\n",cur->name,cur->deg,cur->score,cur->year,cur->age);
                exit(0);
            }
    }
}




int  main()
{
    NODE *t=NULL,*head=NULL;
    int x,n;
    printf("Enter number of applications: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        t=create_node();
        t=read(t);
        head=insert_end(head,t);
    }
    display(head);
    head=del_spec(head);
    printf("After 2nd screening\n");
    display(head);
    printf("Enter number of posts: ");
    scanf("%d",&x);
    display_f(head,x);
    return 0;
}
