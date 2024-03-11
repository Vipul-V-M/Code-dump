#include<stdio.h>
void read(int x[10],int n)
{
    printf("enter %d numbers: \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
}
void print(int x[10],int n)
{
    printf("The array elements are: ");
    for(int i=0;i<n;i++)
        printf("%d ",x[i]);
}

int main()
{
    int n,x[10];
    printf("Enter limit of array: ");
    scanf("%d",&n);
    read(x,n);
    print(x,n);
    return 0;
}
