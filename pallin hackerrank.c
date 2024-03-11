#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int s_pallin(int x,int y)
{
    int min;
    for(int i=y;i>=x;i--)
    {
    int rev=0;
    while(i)
    {
        rev=(rev*10)+(i%10);
        i=i/10;
    }
    if(rev==i)
        min=i;
    }
    return min;

}


int l_pallin(int x,int y)
{
    int max;
    for(int i=x;i<=y;i++)
    {
        int rev=0;
        while(i)
        {
            rev=(rev*10)+(i%10);
            i=i/10;
        }
        if(rev==i)
            max=i;
    }
    return max;
}

int main()
{
    int L,K,x,y;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
    L=s_pallin(x,y);
    K=l_pallin(x,y);
    printf("Smallest palindrome = %d\nLargest palindrome = %d",L,K);
    }
    else printf("Invalid L and K");


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
