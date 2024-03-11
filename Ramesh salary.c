#include<stdio.h>
int main()
{
    float BS,GS;
    printf("Enter the Basic salary: ");
    scanf("%f",&BS);
    GS=BS+(20.0/100*BS)+(40.0/100*BS);
    printf("Ramesh's gross salary is RS.%f",GS);
    return 0;
}
