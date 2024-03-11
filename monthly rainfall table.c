#include<stdio.h>


void read(float a[2][12])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    return;
}

void stats(float a[2][12])
{
    float sum[2]={0,0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<12;j++)
        {
            sum[i]+=a[i][j];
        }
    }
    printf("Total rainfall this year: %.1f\n",sum[0]);
    printf("Total rainfall last year: %.1f\n",sum[1]);
    printf("Average monthly rainfall for this year: %.1f\n",sum[0]/12.0);
    printf("Average monthly rainfall for last year: %.1f\n",sum[1]/12.0);
    return;
}

int main()
{
    float a[2][12];
    read(a);
    stats(a);
    return 0;
}
