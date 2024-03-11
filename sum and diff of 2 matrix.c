#include<stdio.h>
#define m 3
#define n 3

int main()
{
    int a[m][n],b[m][n],sum[m][n],diff[m][n];
    printf("enter the 9 elements of matrix A:\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the 9 elements of matrix B:\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            diff[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    printf("diff matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
