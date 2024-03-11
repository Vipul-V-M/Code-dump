#include<stdio.h>

int main()
{
int a[10][10],m,n,t[10][10];
printf("Enter the size of the matrix m x n:\n");
scanf("%d%d",&m,&n);

read(a,m,n);
display(a,m,n);
rec_tran(a,m,n,t);

}

void read(int a[10][10],int m,int n)
{
    int i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

void display(int a[10][10],int m, int n)
{
    int i,j;
    printf("The matrix is:\n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
      {
         printf("%3d",a[i][j]);
      }
      printf("\n");
    }
}

void rec_tran(int a[10][10], int m, int n, int t[10][10])
{
    int i, j;
    printf("The recurssive transpose of the matrix is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            a[i][j] += 1;
            t[j][i] = a[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%3d", t[i][j]);
        }
        printf("\n");
    }
}
