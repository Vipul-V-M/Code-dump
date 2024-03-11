#include<stdio.h>
#include<math.h>
int main()
{
    float i_temp,f_temp,height;
    printf("Enter the initial and final temperatures: ");
    scanf("%f %f",&i_temp,&f_temp);
    height=(f_temp-i_temp)*1.11*pow(10,-6)*324;
    printf("Change in height is %f mts",height);
    return 0;
}
