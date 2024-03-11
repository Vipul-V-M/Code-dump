#include<stdio.h>
float shop(float amount,char type)
{
    float total_bill;
    switch (type)
    {

        case 'T':if(amount>=1 &&amount<=1000)
            total_bill= amount;
            else if(amount>=1001 && amount<=10000)
                total_bill = amount-(0.07*amount);
            else if (amount>10000)
                total_bill=amount-(0.09*amount);
            else
                printf("invalid input");
            break;

             case 'c':if(amount>=0 &&amount<=5000)
            total_bill= amount-(0.03*amount);
            else if(amount>5000 && amount<=10000)
                total_bill = amount-(0.08*amount);
            else if (amount>10000)
                total_bill=amount-(0.15*amount);
            else
                printf("invalid input");
            break;
        }
        return total_bill;

    }
     int main()
     {
         float amount;
         char type;
         float total_bill;
         float c;
         printf("enter the TYPE OF ITEM\n");
         scanf("%c",&type);
         printf("enter the PURCHASE AMOUNT\n");
         scanf("%f",&amount);
         c=shop(amount,type);
         printf("%f",c);
         return 0;


     }
