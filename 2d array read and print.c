#include<stdio.h>
void read(int a[5][5],int rows,int cols)
{
    printf("Enter %d elements: ",rows*cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    }
    return;
}

void write(int a[5][5],int rows,int cols)

{
    printf("The elemnts in form of %dx%d matrix is:\n\t",rows,cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n\t");
    }
    return;
}
int sum(int a[5][5],int rows,int cols)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sum+=a[i][j];
        }
    }
    return sum;
}

void row_sum(int a[5][5],int rows,int cols)
{
    int sum;
    for(int i=0;i<rows;i++)
    {
        sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=a[i][j];
        }
        printf("The sum of %d row = %d\n",i+1,sum);
    }
    return;
}

void cols_sum(int a[5][5],int rows,int cols)
{
    int sum;
    for(int j=0;j<cols;j++)
    {
        sum=0;
        for(int i=0;i<rows;i++)
        {
            sum+=a[i][j];
        }
        printf("The sum of %d column = %d\n",j+1,sum);
    }
    return;
}

int diagonal_sum(int a[5][5],int rows,int cols)
{
    if(rows==cols)
    {
        int sum=0;
    for(int i=0;i<rows;i++)
        sum+=a[i][i];
    printf("The sum of diagonal elements is = %d",sum);
    return sum;
    }
    else printf("The matrix is not a square matrix");

}

int main()
{
    int a[5][5],s,rows,cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    read(a,rows,cols);
    write(a,rows,cols);
    s=sum(a,rows,cols);
    printf("\b\b\b\b\b\b\b\bSum of the elements is = %d\n",s);
    row_sum(a,rows,cols);
    cols_sum(a,rows,cols);
    diagonal_sum(a,rows,cols);
    return 0;
}
