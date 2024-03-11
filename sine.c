#include<stdio.h>
#include<math.h>


float sine(float rad)
{
    int cnt=3,sign=1,i=7;
    float term=rad,sum=0;
    while(i)
    {
        sum+=term*sign;
        term=(term*rad*rad)/(cnt*(cnt-1));
        sign=sign*-1;
        cnt+=2;
        i--;
    }
    return sum;
}
int main()
{
    float deg,rad,x;
    printf("Enter an angle: ");
    scanf("%f",&deg);
    rad=(deg/180)*3.14159;
    x=sine(rad);
    printf("sin(%f) = %f",deg,x);
    return 0;
}
