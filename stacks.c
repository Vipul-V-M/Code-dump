#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct stack
{
int data[SIZE];
int top;
};

void push(struct stack *s,int element)
{
if(s->top==SIZE-1)
{
printf("Stack is full\n");
}

else
{
s->top++;
s->data[s->top]=element;
}
return;
}

int pop(struct stack*s)
{
int x;

if(s->top==-1)
{
printf("Stack is empty\n");
return -1;
}

else
{
x=s->data[s->top];
s->top--;
return x;
}
}

void display(struct stack s)
{
int i;
for(i=s.top;i>=0;i--)
{
printf("%d\n",s.data[i]);
}
return;
}

int main()
{
struct stack s;
s.top=-1;
int n;

while(1)
{

printf("\n1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&n);
switch(n)
{
 case 1: printf("\npushed element is: ");
         push(&s,10);
         break;

 case 2: printf("\npopped element is: ");
         pop(&s);
         break;

 case 3: display(s);
         break;

 case 4: exit(0);
         break;

 case 5: printf("\npushed element is: ");
         push(&s,20);
         break;

 default: printf("hi");
          break;
}
}
}
