#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>


typedef struct playlist
{
    char name[20];
    char singer[20];
    int mm;
    int ss;
    struct playlist *prev;
    struct playlist *next;
}NODE;

NODE *create_node(void)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("insufficient memory\n");
        return 0;
    }
    temp->prev=temp;
    temp->next=temp;
    return temp;
}

NODE *read(NODE *temp)
{
    printf("Enter the details of song:\n");
    printf("Enter the song name: ");
    scanf("%s",temp->name);
    printf("Enter the songer name: ");
    scanf("%s",temp->singer);
    printf("Enter the song time (in mm ss): ");
    scanf("%d %d",&temp->mm,&temp->ss);
    return temp;
}

NODE *insert_front(NODE *head,NODE *temp)
{
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head->prev->next=temp;
        temp->prev=head->prev;
        head->prev=temp;
        head=temp;
    }
    return head;
}


NODE *insert_end(NODE *head,NODE *temp)
{
    if(head==NULL)
        head=temp;
    else
    {
        temp->prev=head->prev;
        temp->next=head;
        head->prev=temp;
        temp->prev->next=temp;
    }
    return head;
}

void display(NODE *head)
{
    if(head==NULL)
        printf("Play list is empty");
    else
    {
        NODE *cur=head;
        printf("Song\tSinger\tTime\n");
        do
        {
            printf("%s   \t%s  \t%d:%d\n",cur->name,cur->singer,cur->mm,cur->ss);
            cur=cur->next;
        }while(cur!=head);
    }
    return;
}

int count(NODE *head)
{
    if(head==NULL)
        return 0;
    NODE *cur=head;
    int cnt=0;
    do
    {
        cnt++;
        cur=cur->next;
    }while(cur!=head);
    return cnt;
}


NODE *insert_position(NODE *head,NODE *temp,int pos,int cnt)
{
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    if(pos==1)
    {
        head=insert_front(head,temp);
        return head;
    }
    if(pos==cnt+1)
    {
        head=insert_end(head,temp);
        return head;
    }
    NODE *cur=head;
    for(int i=1;i<pos-1;i++)
        cur=cur->next;
    temp->next=cur->next;
    cur->next->prev=temp;
    cur->next=temp;
    temp->prev=cur;
    return head;
}
int main()
{
    NODE *head=NULL,*temp=NULL;
    int o,pos,cnt;
    char keysong[20],keyname[20];
    while(1)
    {
        printf("\nEnter required option:\n1.Insert front\n2.Insert end\n3.Display\n4.Number of songs\n5.Insert at a position\n0.Exit\n");
    scanf("%d",&o);
        switch(o)
        {
            case 1:
                temp=create_node();
                temp=read(temp);
                head=insert_front(head,temp);
            break;
            case 3:
                display(head);
            break;
            case 2:
                temp=create_node();
                temp=read(temp);
                head=insert_end(head,temp);
            break;
            case 4:
                cnt=count(head);
                printf("Number of songs=%d\n",cnt);
            break;
            case 5://insert at a postition
                temp=create_node();
                temp=read(temp);
                cnt=count(head);
                printf("Enter the position to insert: ");
                scanf("%d",&pos);
                if(pos>=1&&pos<=cnt+1)
                {
                    head=insert_position(head,temp,pos,cnt);
                }
                else
                    printf("Enter valid position");
            break;
            /*
            case 6://insert after search
                temp=create_node();
                temp=read(temp);

            break;
            case 7://search & display song
                printf("Enter the song name to play: ");
                scanf("%s",keysong);
                search_play(head,keysong);
            break;
            case 8://next N prev Song display


            break;
            case 9://delete front
                head=delete_front(head);
            break;
            case 10://delete end
                head=delete_end(head);
            break;
            case 11://delete at position from front
                printf("Enter the position to be deleted: ");
                scanf("%d",&pos);
                cnt=count(head);
                if(pos<0&&pos>cnt)
                    printf("enter valid position");;
                else
                {
                    head=delete_position(head,pos);
                }*/
            case 0:
                exit(0);
            default:
                printf("Enter valid option\n");
            break;
        }
    }
    return 0;
}
