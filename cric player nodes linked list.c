#include<stdio.h>
#include<stdlib.h>

typedef struct player
{
    char name[20];
    char team[20];
    int runs;
    int rank;
    struct player *next;
}NODE;

void display(NODE *p1)
{
    NODE *cur=p1;
    while(cur!=NULL)
    {
        printf("%s %s %d %d\n",cur->name,cur->team,cur->runs,cur->rank);
        cur=cur->next;
    }
}
int main()
{
    NODE *p1,*p2;
    p1=(NODE *)malloc(sizeof(NODE));
    p1->next=NULL;
    p2=(NODE *)malloc(sizeof(NODE));
    p2->next=NULL;
    scanf("%s %s %d %d",p1->name,p1->team,&p1->runs,&p1->rank);
    scanf("%s %s %d %d",p2->name,p2->team,&p2->runs,&p2->rank);
    p1->next=p2;
    display(p1);
    return 0;
}
