#include<stdio.h>
#include<math.h>
int main()
{
    int m1,m2,m3,m4,m5,agg;
    float perc;
    printf("Enter the marks obtained in 5 different subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    perc=agg/5.0;
    printf("Aggregate marks is %d\nPercentage marks is %.2f",agg,perc);
    return 0;
}
