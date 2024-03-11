#include<stdio.h>
float conv(float F)
{
    float C;
    C=(5.0/9)*(F-32);
    return C;
}
void WC(float C)
{
    if (C<0)
        printf("Freezing!!");
    else if(C>=0&&C<10)
        printf("Very cold");
    else if(C>=10&&C<20)
        printf("Cold");
    else if(C>=20&&C<30)
        printf("Normal");
    else if(C>=30&&C<40)
        printf("Hot");
    else
        printf("Very hot!!");
    return;
}
int main()
{
    float F,C;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&F);
    C=conv(F);
    WC(C);
    return 0;
}
