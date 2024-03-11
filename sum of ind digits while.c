#include<stdio.h>
int digit_sum(long int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}
int main()
{
    int sum,num;
    printf("enter number: ");
    scanf("%d",&num);
    sum=digit_sum(num);
    printf("sum of ind digits is %d",sum);
    return 0;
}
