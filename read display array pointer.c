#include<stdio.h>
int read(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
}

void display(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}

int sum(int *p,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+*p;
        p++;
    }
    return s;
}

int max(int *p,int n)
{
    int m=*p;
    for(int i=0;i<n;i++)
    {
        if(*p>m)
            m=*p;
        p++;
    }
    return m;
}

int max_add(int *p,int n)
{
    int m=*p,*q=p;
    for(int i=0;i<n;i++)
    {
        if(*p>m)
        {
            m=*p;
            q=p;
        }
        p++;
    }
    return q;
}

int main()
{
    int a[10],n,*p,*pmax;
    scanf("%d",&n);
    p=&a[0];
    read(p,n);
    display(p,n);
    printf("\nSum is %d",sum(p,n));
    printf("\nMax is %d",max(p,n));
    pmax=max_add(p,n);
    printf("\nAddress of max is %u",*pmax);
    return 0;
}
