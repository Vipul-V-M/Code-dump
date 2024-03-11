#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void calc(char t,int qunt)
{
    float amt;
    switch (t)
    {
        case 'B':amt=(25.0*qunt)+1;
                printf("The total amount is %f",amt);
                break;
        case 'C':amt=(30.0*qunt)+1;
                printf("The total amount is %f",amt);
                break;
        case 'S':amt=(50.0*qunt)+1;
                printf("The total amount is %f",amt);
                break;
        case 'M':amt=(45.0*qunt)+1;
                printf("The total amount is %f",amt);
                break;
        default:printf("Please enter valid Type of beverage!!\n");
        exit;
    }
    return;
}
int main()
{
    int qunt;
    char t;
    printf("Enter the type of beverage: ");
    scanf("%c",&t);
    t=toupper(t);
    printf("Enter Quantity: ");
    scanf("%d",&qunt);
    calc(t,qunt);
    return 0;
}
