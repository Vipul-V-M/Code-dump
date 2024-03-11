#include<stdio.h>

int main()
{

    int a,b,oper,ans;
    while(1)
    {
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);
    printf("enter the operation\n1-addition\n2-subtraction\n3-multiplication\n4-division\n ");
    scanf("%d",&oper);
    switch(oper)
    {
        case 1:ans=a+b;
        break;
        case 2:ans=a-b;
        break;
        case 3:ans=a*b;
        break;
        case 4:ans=a/b;
        break;
        default: printf("invalid operation");
    }
    printf("%d\n",ans);
    }
}
