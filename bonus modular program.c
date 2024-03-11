#include<stdio.h>
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
float Bonus(int quantity)
{
    float bonus;
    bonus=BONUS_RATE*quantity;
    return bonus;
}
float Comm(int quantity,float price)
{
    float commission;
    commission=COMMISSION*quantity*price;
    return commission;
}
float GS(float bonus,float commission)
{
    float gross_salary;
    gross_salary=BASE_SALARY+bonus+commission;
    return gross_salary;
}
int main()
{
    int quantity;
    float gross_salary,price,Bbonus,bonus,commission,Commission;
    printf("Input no sold and price");
    scanf("%d %f",&quantity,&price);
    bonus=Bonus(quantity);
    commission=Comm(quantity,price);
    gross_salary=GS(bonus,commission);
    printf("%.2f\n",bonus);
    printf("%.2f\n",commission);
    printf("%.2f\n",gross_salary);
    return 0;
}
