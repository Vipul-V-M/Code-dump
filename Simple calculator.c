#include<stdio.h>
#include<ctype.h>
int main()
{
    int a,b,ans;
    char sym;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operation to be used\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n5.Remainder(%): ");
    scanf(" %c",&sym);
    switch (sym)
        {
            case '+':ans=a+b;
                break;
            case '-':ans=a-b;
                break;
            case '*':ans=a*b;
                break;
            case '/':ans=a/b;
                break;
            case '%':ans=a%b;
                break;
            default:printf("Please enter a valid input\n");
        }
    printf("The answer is =%d",ans);
    return 0;
}
