#include<stdio.h>
#include<math.h>
int main()
{
float price,distance;
printf("Enter the price of petrol per litre: ");
scanf("%f",&price);
distance=(1066.64/price)*14;
printf("Distance travelled is %f kms",distance);
return 0;
}
