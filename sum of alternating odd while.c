#include<stdio.h>
int find_sum(int n)
{
    int x=1,sum=0,sign=1,i=1;
    while(i<=n)
    {
        sum=sum+x*sign;
        x=x+2;
        sign=sign*(-1);
        i++;
    }
    return sum;
}
int main()
{
    int n,s;
    printf("enter number n: ");
    scanf("%d",&n);
    s=find_sum(n);
    printf("sum is %d",s);
    return 0;
}
