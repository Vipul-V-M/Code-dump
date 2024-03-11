#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sec_sal(int n)
{
    int salary,prev=0,x;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&salary);
        if(salary>0)
        {
            if(salary>prev)
            {
                x=prev;
                prev=salary;
            }
        }
        else
        {
            printf("Invalid");
            exit(0);
        }
    }
    return x;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    if(n>0)
        x=sec_sal(n);
    else
    {
        printf("Invalid");
        exit(0);
    }
    printf("%d",x);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
