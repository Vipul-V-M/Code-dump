#include<stdio.h>
void read(int *p,int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",p);
}

void display(int *p,int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",*p);
}

int main()
{
    int a[10],n,*p;
    scanf("%d",&n);
    p=&a;
    read(p,n);
    display(p,n);
    return 0;
}

