#include<stdio.h>

int main()
{
    int n,sum=1,prev=0,next;
    printf("enter number of elements needed in series: ");
    scanf("%d",&n);
    if(n==1)
        printf("0");
    else if(n>1)
    {
        printf("%d ",prev);
        printf("%d ",sum);
        for(int i=2;i<n;i++)
        {
            next=sum+prev;
            printf("%d ",next);
            prev=sum;
            sum=next;
        }
    }
    else
        printf("invalid input");
    return 0;
}
