#include<stdio.h>
#include<ctype.h>
int main()
{
    char d;
    float salary;
    printf("Enter the designation of employee:\nS  for software developer\nA  for android developer\nP  for project manager\n");
    scanf("%c",&d);
    printf("Enter the salary: ");
    scanf("%f",&salary);
    switch (d)
    {
        case 's':
        case 'S':
            {
                if(salary>=100000&&salary<=200000)
                {
                    salary=salary+0.05*salary;
                    printf("Your total salary is %.2f",salary);
                }
                else if (salary>=40000&&salary<100000)
                {
                    salary=salary+0.03*salary;
                    printf("Your total salary is %.2f",salary);
                }
                else printf("Your total salary is %.2f",salary);
            }
            break;
        case 'a':
        case 'A':
            {
                if(salary>=80000&&salary<=160000)
                {
                    salary=salary+0.04*salary;
                    printf("Your total salary is Rs.%.2f",salary);
                }
                else if(salary>=50000&&salary<80000)
                {
                    salary=salary+0.05*salary;
                    printf("Your total salary is Rs.%.2f",salary);
                }
                else printf("Your total salary is %.2f",salary);
            }
            break;
        case 'p':
        case 'P':
            {
                if(salary>=100000&&salary<=200000)
                {
                    salary=salary+0.09*salary;
                    printf("Your total salary is Rs.%.2f",salary);
                }
                else if(salary>=60000&&salary<=80000)
                {
                    salary=salary+0.07*salary;
                    printf("Your total salary is Rs.%.2f",salary);
                }
                else if(salary>=40000&&salary<60000)
                {
                    salary=salary+0.05*salary;
                    printf("Your total salary is Rs.%.2f",salary);
                }
                else printf("Your total salary is %.2f",salary);
            }
            break;
        default:printf("INVALID DESIGNATION!!!");
    }
    return 0;
}
