#include<stdio.h>

void seq(int n)
{
    int t1=0,t2=1,t3,cnt=1;
    printf("0 1");
    while(cnt<=n-2)
    {
        t3=t1+t2;
        printf(" %d",t3);
        t1=t2;
        t2=t3;
        cnt++;
    }
}
int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d",&n);
    if(n<=0)
        printf("Enter a number greater than 0.");
    else if(n==1)
        printf("0");
    else
    seq(n);
}
