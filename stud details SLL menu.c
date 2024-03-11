#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    typedef struct student
    {
        char name[20];
        int r_num;
        struct student *next;
    }NODE;

    NODE *create_node(void)
    {
        NODE *temp;
        temp=(NODE*)malloc(sizeof(NODE));
        if(temp==NULL)
        {
        printf("INSUFFICIENT MEMORY\n");
        return 0;
        }
        temp->next=NULL;
        return temp;
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
            {
             cur=cur->next;
            }
            cur->next=t;
            return head;
         }
    }

    NODE *read_details(NODE *t)
    {
        printf("Enter name and roll number\n");
        scanf("%s%d",&t->name,&t->r_num);
        return t;
    }

    NODE *insert_front(NODE *head ,NODE *t1)
    {
        t1->next=head;
        head=t1;
        return head;
    }

    NODE  *display(NODE *head)
    {
        if(head == NULL)
    {
       printf("\nempty list\n");
   }
        else
        {

        NODE *cur;
        cur =head;
        while(cur!=NULL)
        {
            printf("%s %d \n",cur->name,cur->r_num);
            cur=cur->next;
        }
        }
        return head;
    }

    NODE *initialize(NODE *head)
    {
        head=NULL;
        return head;
    }
    int count(NODE *head)
    {
        NODE *cur;
        cur=head;
        int cnt=0;
        if(head==NULL)
            return cnt;
        else if(cur->next==NULL)
            return cnt++;
        else
        {
            while(cur!=NULL)
            {
                cur=cur->next;
                cnt++;
            }
            return cnt++;
        }
    }

    void search(NODE *head,char key[])
    {
    NODE *cur;
    int i;
    cur = head;
    while(cur!=NULL)
    {
    if(strcmp(cur->name,key)==0)
    {
      printf("%s %d\n",cur->name,cur->r_num);
      return;
    }
    else
    {
     cur=cur->next;
    }
    }
    printf("Element not fount\n");
    }

    NODE *specific_position(NODE*head,NODE*t,int pos)
    {
      if(pos==1)
      {
        t->next=head;
        head=t;  //insert front
      }

      else if(head==NULL)
      {
        head=t;
      }

      else if(pos==n+1)
      {
        NODE*cur=head;
        while (cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=t;
      }

      else
      {
        NODE*cur=head;
        int i;
        for(i=1;i<pos;i++)
        {
            cur=cur->next;
        }
        t->next=cur->next;
        cur->next=t;
      }
      return head;
    }

    NODE *insert_name(NODE *head,NODE *t,char n[])
  {
      if(head==NULL)
        printf("Empty list");
      else if(head->next==NULL)
      {
          if(strcmp(head->name,n)==0)
            head->next=t;
          else
            printf("string not found");
      }
      else
      {
          NODE *cur=head;
          int f=0;
          while(cur!=NULL)
          {
              if(strcmp(cur->name,n)==0)
              {
                   f=1;
                   t->next=cur->next ;
                    cur->next=t;
                   break;
              }
              else
                cur=cur->next;
          }
          if(f==0)
          {
              //if(strcmp(cur->name,n)==0)
              //  cur->next=t;
              //else
                printf("Not found");
          }
      }
      return head;
            }

    NODE *delete_front(NODE *head)
    {
        if(head==NULL)
            printf("empty list\n");

         else if(head->next==NULL)
            {
               free(head);
               head==NULL;
            }

         else
         {
            NODE *cur=head;
            head=head->next;
            free(cur);
         }
         return head;
    }

    NODE *delete_end(NODE *head)
    {
        if(head==NULL)
            printf("empty list\n");

         else if(head->next==NULL)
            {
            free(head);
            head=NULL;
            }

         else{
            NODE *cur=head;
            NODE *prev;
            while(1)
            {
               if(cur->next!=NULL)
               {
                   prev=cur;
                   cur=cur->next;
               }
               else
               {
                   prev->next=NULL;
                   free(cur);
                   return head;
               }
            }
         }
    }

    NODE *delete_pos(NODE *head,int pos)
    {
        NODE *cur,*prev=NULL;
        if(head==NULL)
        printf("Empty list");

        else if(head->next==NULL&&pos==1)
        {
            free(head);
            head=NULL;
        }

        else if(pos==1)
        {
            cur=head;
            head=head->next;
            free(cur);
        }

        else
        {
            cur=head;
            int i;
            for(i=1;i<=pos;i++)
            {
                prev=cur;
                cur=cur->next;
            }
              prev->next=cur->next;
              free(cur);
        }
        return head;
            }

    NODE*insertion_sort_list(NODE*head,NODE*t)
    {
        if(head==NULL)
        {
            head=t;
        }

        else if(head->next=NULL)
        {
            if(head->r_num < t->r_num)
            {
            head->next=t;
            t->next=NULL;
            }

            else
            {
                t->next=head;
                head=t;
            }
        }

        else
        {
           NODE*prev;
           NODE*cur=head;

           while(cur!=NULL)
           {
            if(cur->r_num > t->r_num)
            {
                 t->next=head;
                 t=head;
            }

            else if(cur->r_num < t->r_num)
            {
                prev->next=t;
                t->next=cur;
            }

            else if(cur==NULL)
            {
                prev->next=t;
            }
            prev =cur;
            cur=cur->next;
           }
        }
        return head;
    }

    int main()
    {
        int pos;
       int ch;
       int c;
       char na[10];
       NODE *head;
       NODE *t;
       t->next=NULL;
       head = initialize(head);
       char key[20];
       while(1)
       {
           printf("1.insert front\n2.insert_end\n3.display\n4.count\n5.search\n6.insert after name\n7.delete front\n8.delete end\n9.delete position\n10.exit\n");
           scanf("%d",&ch);
           switch(ch)
           {
           case 1:
            t=create_node();
            t=read_details(t);
            head = insert_front(head,t);
            break;
           case 2:
            t=create_node();
            t=read_details(t);
            head=insert_end(head,t);
            break;
           case 3:
            head=display(head);
            break;
           case 4:
               c=count(head);
               printf("%d\n",c);
            break;
           case 5:
              printf("ENTER ELEMENT TO SEARCH\n");
              scanf("%s",key);
              search(head,key);
              break;
           case 6:
            printf("ENTER NAME AFTER WHICH  ELEMENT SHOULD BE INSERTED\n");
            scanf("%s",na);
            t=create_node();
            t=read_details(t);
            head=insert_name(head,t,na);
            break;
           case 7:
            head=delete_front(head);
            break;
           case 8:
            head=delete_end(head);
            break;
           case 9:
            printf("enter position\n");
            scanf("%d",&pos);
            head=delete_pos(head,pos);
           case 10:
            t=create_node();
            t=read_details(t);
            head=insertion_sort_list(head,t);
            break;
           case 11:
            exit(0);
           }
       }
       }
