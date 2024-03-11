#include<stdio.h>
#include<string.h>


typedef struct
{
    char reg_no[10];
    char type;
}info;

typedef struct
{
    info vehicle[100];
    int front;
    int rear;
}queue;


info read()
{
    info v;
    printf("Enter vehicle reg_no\n");
    scanf(" %s",v.reg_no);
    printf("Enter vehicle type\n");
    scanf(" %c",&v.type);
    return v;
}


int isempty(queue *q)
{
    if(q->front>q->rear)
        return 1;
    return 0;
}


int isfull(queue *q)
{
    return (q->rear == 99);
}

void insert(queue *q, info v)
{
    if (isfull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->rear++;
        q->vehicle[q->rear] = v;
    }
}

info delete(queue *q)
{
    if(isempty(&q))
    {
        printf("Queue is empty");
        exit(0);
    }
    return(q->vehicle[q->front++]);
}

int main()
{
    queue q;
    q.front=0;
    q.rear=-1;
    info v;
    int n,L=0,H=0,T=0;
    printf("Enter number of vehicles\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        v=read();
        insert(&q,v);
    }
    for(int i=0;i<n;i++)
    {
        v=delete(&q);
        if(v.type=='L'||v.type=='l')
            L++;
        else if(v.type=='H'||v.type=='h')
            H++;
        else if(v.type=='T'||v.type=='t')
            T++;
        else printf("invalid");
    }
    printf("\nMoney collected from LMV= %d\n",L*50);
    printf("Money collected from HMV= %d\n",H*100);
    printf("Total number of two wheelers= %d",T);
    return 0;

}
