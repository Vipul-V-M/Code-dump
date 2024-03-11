#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

float disc(char type,float amt)
{
    float bill;
    if(type=='T'||type=='t')
    {
        if(amt>0&&amt<=1000)
            bill=amt;
        else if(amt>1000&&amt<=10000)
            bill=amt-0.07*amt;
        else if(amt>10000)
            bill=amt-0.09*amt;
        else
        {
            printf("Invalid amount");
            exit(0);
        }
    }

    else if(type=='C'||type=='c')
    {
        if(amt>0&&amt<=5000)
            bill=amt-0.03*amt;
        else if(amt>5000&&amt<=10000)
            bill=amt-0.08*amt;
        else if(amt>10000)
            bill=amt-0.15*amt;
        else
        {
            printf("Invalid amount");
            exit(0);
        }
    }

    else
    {
        printf("Invalid type");
        exit(0);
    }
    return bill;
}

int main()
{
    char type;
    float amt,T_bill;
    printf("Enter the type of item\nT for toys\nC for clothes:\n");
    scanf("%c",&type);
    printf("Enter the purchase amount: ");
    scanf("%f",&amt);
    T_bill=disc(type,amt);
    printf("Total bill is Rs.%.2f",T_bill);
    return 0;
}

