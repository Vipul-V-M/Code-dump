#include<stdio.h>
void read(int a[5][4])
{

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
}

void display(int a[5][4])
{
    printf("     \tCandidate A   \tCandidate B   \tCandidate C   \tCandidate D\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",i+1);
        for(int j=0;j<4;j++)
        {
            printf("\t   %d\t",a[i][j]);
        }
        printf("\n");
    }
}
int t_sum(int a[5][4])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
            sum+=a[i][j];
    }
    return sum;
}
void winner(int a[5][4],int sum)
{
    int c_sum[4]={0,0,0,0};
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<5;i++)
            c_sum[j]+=a[i][j];
            switch(j)
            {
                case 0:printf("Total votes for Candidate A: %d\n",c_sum[0]);
                break;
                case 1:printf("Total votes for Candidate B: %d\n",c_sum[1]);
                break;
                case 2:printf("Total votes for Candidate C: %d\n",c_sum[2]);
                break;
                case 3:printf("Total votes for Candidate D: %d\n",c_sum[3]);
                break;
            }
    }
    printf("Percentage votes for Candidate A: %.2f\n",c_sum[0]*100.0/sum);
    printf("Percentage votes for Candidate B: %.2f\n",c_sum[1]*100.0/sum);
    printf("Percentage votes for Candidate C: %.2f\n",c_sum[2]*100.0/sum);
    printf("Percentage votes for Candidate D: %.2f\n",c_sum[3]*100.0/sum);

    for(int z=0;z<4;z++)
    {
        char c;
        if(z==0)
            c=65;
        else if(z==1)
            c=66;
        else if(z==2)
            c=67;
        else if(z==3)
            c=68;
        if((c_sum[z]*100.0/sum)>50)
            printf("Candidate %c is winner",c);
    }
}

int main()
{
    int a[5][4],sum;
    read(a);
    display(a);

    sum=t_sum(a);
    winner(a,sum);
}
