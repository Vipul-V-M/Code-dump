#include<stdio.h>
int main()
{
    int n;
    char h=3;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
        for(int j=1;j<=i;j++)
            printf("%c",h);
        printf("\n");
        }
        else if(i>n/2)
        {
        for(int j=n-i;j>=1;j--)
            printf("%c",h);
        printf("\n");
        }
        else
        {
            for(int i=1;i<=n/2+1;i++)
                printf("%c",h);
            printf("\n");
        }
    }
    return 0;
}
