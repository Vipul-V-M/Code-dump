#include<stdio.h>
#define pi 3.141592

void area_peri(float r,float *a,float *p)
{
    *a=pi*r*r;
    *p=2*pi*r;
    return;
}
int main()
{
    float r,a,p;
    printf("Enter radius: ");
    scanf("%f",&r);
    area_peri(r,&a,&p);
    printf("Perimeter=%.2f\nArea=%.2f",p,a);
    return 0;
}
