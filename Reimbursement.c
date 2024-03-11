#include<stdio.h>
#include<math.h>
int main()
{
    float I,F,D,mil_reimb;
    printf("Enter the initial and final odometer readings: ");
    scanf("%f %f",&I,&F);
    D=(F-I);
    mil_reimb=D*18;
    printf("Mileage reimbursement for %f kms is Rs.%f",D,mil_reimb);
    return 0;
}
