#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num[100000000],sum=0;
    scanf("%d",&num[100000000]);
    if(num>9)
    {
        for(int i=num;i>0;i++)
    	{
        	printf("%d\n",num[i]);
            sum+=num[i];
    	}
        printf("%d",sum);
    }
    else printf("Number should have more than one digit");


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
