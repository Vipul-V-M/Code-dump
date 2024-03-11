#include<stdio.h>
int find_sum(int n)
{
    int sum=0,num,i=1;
    while(i<=n)
    {
        printf("enter a number \n");
        scanf("%d",&num);
        sum=sum+num;
        i++;
    }
    return sum;
}

int main()
{
    int n,x;
    printf("enter number n: ");
    scanf("%d",&n);
    x=find_sum(n);
    printf("sum is %d",x);
    return 0;
}
