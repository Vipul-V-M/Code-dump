#include<stdio.h>
void max_min(int a,int b,int *max,int *min)
{
    if (a>b)
    {
        *max=a;
        *min=b;
    }
    else
    {
        *max=b;
        *min=a;
    }
    return;
}
int main()
{
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    max_min(a,b,&max,&min);
    printf("max=%d min=%d",max,min);
    return 0;
}
