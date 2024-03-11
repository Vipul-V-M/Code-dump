#include <stdio.h>
#define MAXSIZE 5

struct cqueue
{
    int data[MAXSIZE];
    int front, rear;
};

int isfull(struct cqueue *cq)
{
    if (cq->front == ((cq->rear + 1) % MAXSIZE))
        return 1;
    return 0;
}

int isempty(struct cqueue *cq)
{
    if (cq->front == cq->rear)
        return 1;
    return 0;
}

void enqueue(struct cqueue *cq, int x)
{
    if (isfull(cq))
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        cq->rear = (cq->rear + 1) % MAXSIZE;
        cq->data[cq->rear] = x;
    }
}

void dequeue(struct cqueue *cq)
{
    if (isempty(cq))
    {
        printf("Queue is empty\n");
        return;
    }

    int x;
    cq->front = (cq->front + 1) % MAXSIZE;
    x = cq->data[cq->front];
}

void display(struct cqueue *cq)
{
    int i;
    if (isempty(cq))
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Circular queue elements are:\n");
    if (cq->front <= cq->rear)
    {
        for (i = cq->front + 1; i <= cq->rear; i++)
            printf("%d ", cq->data[i]);
    }
    else
    {
        for (i = cq->front + 1; i < MAXSIZE; i++)
            printf("%d ", cq->data[i]);
        for (i = 0; i <= cq->rear; i++)
            printf("%d ", cq->data[i]);
    }
    printf("\n");
}


int main()
{
    struct cqueue cq;
    cq.front = MAXSIZE-1;
    cq.rear = MAXSIZE-1;
    int ch, n;

    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &n);
            enqueue(&cq, n);
            break;
        case 2:
            dequeue(&cq);
            break;
        case 3:
            display(&cq);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }

    return 0;
}
