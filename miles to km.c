#include<stdio.h>
int main()
{
    float miles,kms;
    printf("Enter distance in miles: ");
    scanf("%f",&miles);
    kms=miles*1.60934;
    printf("%f miles in kilometers is %f kms",miles,kms);
    return 0;
}
