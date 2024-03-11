#include<stdio.h>
int max(int a,int b)
{
    if (a>b)
        return a;
    return b;
}
int min(int a,int b)
{

    if (a<b)
        return a;
    return b;
}
int main()
{
    int a,b,x,y;
    printf("enter 2 no: ");
    scanf("%d %d",&a,&b);
    x=max(a,b);
    y=min(a,b);
    printf("maximum no is %d\n",x);
    printf("minimun no is %d",y);
    return 0;
}
