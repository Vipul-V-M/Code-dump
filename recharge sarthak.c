#include<stdio.h>
#include<string.h>
# define SIZE 5
typedef struct
{
    double num;
    int amt;
    char type[10];
}data;
typedef struct
{
    data rech[SIZE];
    int front ,rear;
}QUEUE;
data read()
{
    data dt;
    printf("enter recharge details\n");
    scanf("%lf%d%s",&dt.num,&dt.amt,dt.type);
    return dt;
}
void display(data dt)
{
    printf("number:%0lf\nrecharge amt:%d\nrecharge type:%s\n",dt.num,dt.amt,dt.type);
}
int full(QUEUE q)
{
    return(q.rear==SIZE-1);
}
void enqueue(QUEUE *q,data dt)
{
    if(full(*q))
    printf("queue overflow\n");
    else
    q->rech[++q->rear]=dt;
}
data dequeue(QUEUE *q)
{
    return(q->rech[q->front++]);

}
int empty(QUEUE q)
{
    return(q.front>q.rear);
}
int main()
{
    QUEUE q;
    q.front=0;
    q.rear=-1;
    int N;
    data dt;
    int postpaid,prepaid;
    printf("enter N\n");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        dt=read();
        enqueue(&q,dt);
    }
    if(empty(q))
    printf("queue underflow\n");
    else
    {
        printf("\nrecharge details:\n");
        for(int i=q.front;i<=q.rear;i++)
        {
            display(q.rech[i]);
        }
    }
    for(int i=0;i<N;i++)
    {
        dt=dequeue(&q);
        if(strcmp(dt.type,"postpaid")==0)
        postpaid=postpaid+dt.amt;
        else
        prepaid=prepaid+dt.amt;
    }
    printf("\npostpaid totoal amt=%d\n",postpaid);
        printf("prepaid totoal amt=%d\n",prepaid);


}
