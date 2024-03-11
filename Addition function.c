//modular program to add 2 no
#include<stdio.h>
//function definition
int sum(int x,int y) //function header-line
{

    int s;           //local declaration of variable
    s=x+y;
    return s;
}
int main()
{
    int x,y,s;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    s=sum(x,y);      //function call
    printf("%d+%d=%d",x,y,s);
    return 0;
}
