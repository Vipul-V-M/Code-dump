//Spiral Traversing of a square matrix till 4x4

#include<stdio.h>

void read(int a[5][5],int n)
{
    printf("Enter %d elements of matrix: ",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}
void display(int a[5][5],int n)
{
    printf("The elements in form of %dx%d matrix is:\n\t",n,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
            printf("\n\t");
    }
    printf("\n");
}
void spiral(int a[5][5],int n)
{
    printf("The spiral elements of matrix are: ");
    for(int j=0;j<n;j++)
        printf("%d ",a[0][j]);
    for(int i=1;i<n;i++)
        printf("%d ",a[i][n-1]);
    for(int j=n-2;j>=0;j--)
        printf("%d ",a[n-1][j]);
    for(int i=n-2;i>0;i--)
        printf("%d ",a[i][0]);
    for(int j=1;j<n-1;j++)
        printf("%d ",a[1][j]);
    for(int i=2;i<n-1;i++)
        printf("%d ",a[i][n-2]);
    for(int j=n-3;j>0;j--)
        printf("%d ",a[n-2][j]);
}
int main()
{
    int a[5][5],n;
    printf("Enter number of Rows/Columns (For a square matrix): ");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    spiral(a,n);
    return 0;
}
