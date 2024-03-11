#include<stdio.h>
void calculator(float a,float b,float *add,float *sub,float *mul,float *div)
{
    *add=a+b;
    *sub=a-b;
    *mul=a*b;
    *div=a/b;
    return;
}
int main()
{
    float a,b,add,sub,mul,div;
    scanf("%f %f",&a,&b);
    calculator(a,b,&add,&sub,&mul,&div);
    printf("Sum=%.3f\nDifference=%.3f\nProduct=%.3f\nQuotient=%.3f",add,sub,mul,div);
    return 0;
}
