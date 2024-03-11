#include<stdio.h>

void read(int a[10][10],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    }
}
void display(int a[10][10],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
}

void sort(int a[10][10],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        int min;
        for(int j=0;j<cols;j++)
        {
            for(int k=j+1;k<cols;k++)
            {
                if(a[i][k]<a[i][j])
                {
                    min=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=min;
                }
            }
        }
    }
    display(a,rows,cols);
}

int main()
{
    int rows,cols,a[10][10];
    scanf("%d %d",&rows,&cols);
    read(a,rows,cols);
    display(a,rows,cols);
    sort(a,rows,cols);
    return 0;
}
