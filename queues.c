#include<stdio.h>
#include<math.h>

typedef struct queue
{
    char type[100];
    int front;
    int rear;
}queue;

int isempty(queue *q)
{
    if(q->front>q->rear)
        return 1;
    return 0;
}

int isfull(queue *q)
{
    return(q->rear == 99);
}

void insert(queue *q, char data)
{
    if(isfull(q))
    {
        printf("Queue Overflow\n");
        return;
    }
        q->rear++;
        q->type[q->rear] = data;
}

int delete(queue *q)
{
    if(isempty(q))
    {
        printf("Queue is empty\n");
        return 0;
    }
        char x;
        x=q->type[q->front];
        q->front++;
        return x;
}

int main()
{
    queue q;
   q.front=0;
   q.rear=-1;
   char data,x;
   int n,L=0,H=0,T=0;
   printf("Enter number of vehicles: ");
   scanf("%d",&n);
   printf("Enter the type of the vehicles in queue:\n");
   for(int i=0;i<n;i++)
   {
       scanf(" %c",&data);
       insert(&q,data);
   }
   for(int i=0;i<n;i++)
   {
       x=delete(&q);
       if(x=='L'||x=='l')
        L++;
        else if(x=='H'||x=='h')
            H++;
        else if(x=='L'||x=='l')
            L++;
        else if(x=='T'||x=='t')
            T++;
        else
            printf("Invalid");
   }

   printf("Money collected from LMV=%d\n",50*L);
   printf("Money collected from HMV=%d\n",100*H);
   printf("Number of two wheelers=%d\n",T);


   return 0;
}
