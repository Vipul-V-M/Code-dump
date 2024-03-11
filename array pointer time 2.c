#include<stdio.h>
void read(int a[10],int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
}

void display(int a[10],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
}
int main()
{
    int a[10],n;
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    return 0;
}

