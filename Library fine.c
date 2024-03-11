#include<stdio.h>
#include<ctype.h>
int main()
{
    float fine;
    int days;
    char type;
    printf("Enter the type of library:\nC  for central library\nM  for main library\n");
    scanf("%c",&type);
    printf("Enter the number of days you are late to return the book: ");
    scanf("%d",&days);
    if (type=='c'||type=='C')
    {
        if (days>0&&days<=5)
        {
            fine=days*0.5;
            printf("Your fine is %.2f",fine);
        }
        else if (days>=6&&days<=10)
        {
            fine=2.5+(days-5);
            printf("Your fine is %.2f",fine);
        }
        else if (days>=11&&days<=15)
        {
            fine=7.5+(days-10)*5;
            printf("Your fine is %.2f",fine);
        }
        else if (days>15)
        {
            printf("Your membership is cancelled");
        }
        else
        {
            printf("INVALID INPUT!!\nPlease enter valid number of days");
        }
    }
    else if (type=='m'||type=='M')
    {
        if (days>0&&days<=5)
        {
            fine=days;
            printf("Your fine is %.2f",fine);
        }
        else if (days>=6&&days<=10)
        {
            fine=5+(days-5)*2;
            printf("Your fine is %.2f",fine);
        }
        else if (days>=11&&days<=15)
        {
            fine=15+(days-10)*10;
            printf("Your fine is %.2f",fine);
        }
        else if (days>15)
        {
            printf("You cannot borrow book anymore");
        }
        else
        {
            printf("INVALID INPUT!!\nPlease enter valid number of days");
        }
    }
    else
    {
        printf("INVALID TYPE OF LIBRARY!!!\nPlease enter valid");
    }
    return 0;
}
