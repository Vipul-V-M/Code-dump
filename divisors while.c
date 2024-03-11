//unsolved mystery
#include<stdio.h>
void divisor(int num)
{
    int i,count=0;
    printf("1\n");
    while(i<=(num/2))
    {
        if((num%2)!=0)
        {
            i=3;
            if((num%i)==0)
            {
                printf("%d\n",num%i);
                count++;
            }
            i=1+2;
        }
        else
        {
            i=2;
            if((num%i)==0)
            {
                printf("%d\n",num%i);
                count++;
            }
            i++;
        }
    }
    return ;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    divisor(num);
    printf("%d",num);
    return 0;
}
