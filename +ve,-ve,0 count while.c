#include<stdio.h>

void count(int n)
{
    int p_cnt=0,n_cnt=0,z_cnt=0;
    int i=1,num;
    while(i<=n)
    {
        printf("enter the number \n");
        scanf("%d",&num);
        if(num>0)
            p_cnt++;
        else if(num<0)
            n_cnt++;
        else z_cnt++;
        i++;
    }
    printf("p_cnt=%d\nn_cnt=%d\nz_cnt=%d\n",p_cnt,n_cnt,z_cnt);
}
int main()
{
    int n;
    printf("enter number n: ");
    scanf("%d",&n);
    count(n);
    return 0;
}
