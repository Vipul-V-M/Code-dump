#include<stdio.h>
#include<math.h>
int main()
{

    int numb,rev,numb_2,rev_2,ans,x;
    printf("Enter a 3-digit number such that first and last digit differ by atleast two: ");
    scanf("%d",&numb);
    if (numb>100&&numb<1000)
    {
    printf("Reverse the entered number \nSubtract the smaller number from larger number \nTake the reverse of the subtraction \nAdd it to the result of subtraction\n");
    rev=(numb%10)*100+((numb%100)/10)*10+(numb/100);
    if (numb>rev)
        numb_2=numb-rev;
    else
        numb_2=rev-numb;
    rev_2=(numb_2%10)*100+((numb_2%100)/10)*10+(numb_2/100);
    ans=rev_2+numb_2;
    printf("Do you want to see the result? (press ENTER to continue)");
    scanf("%f",&x);
    printf("Your final result is %d",ans);
    }
    else printf("Please read the instructions properly!!");

    return 0;

}
