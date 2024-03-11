#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 50

struct stack
{

   char el[SIZE];
   int top ;

};

 typedef struct stack STACK;


 void push(STACK *s,char ch)
 {
  if(s->top == SIZE-1)
    printf("Stack overflow\n");
  else
     s->el[++(s->top)]=ch;
 }

 char pop(STACK *s)
 {
     if(s->top == -1)
        printf("pop: STACK Underflow\n");
     else
        return(s->el[(s->top)--]);

}

void reversestring(STACK *s)
{
   int i = 0;
   char inputstr[SIZE],outputstr[SIZE];
   scanf("%s",inputstr);
   while(inputstr[i]!='\0')
   {
   push(s,inputstr[i]);
   i++;
   }
   i = 0;
   while(s->top!=-1)
   {

outputstr[i]=pop(s);
i++;
   }
   outputstr[i]='\0';
   if(strcmp(inputstr,outputstr)==0)
    printf("%s is a palindrome string\n",inputstr);
   else
    printf("%s is not a palindrome string\n",inputstr);



}

int main()
{
    STACK st,*s;
    s = &st;
    s->top =-1;
   reversestring(&s);

     return 0;
}
