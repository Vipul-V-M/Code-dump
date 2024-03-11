#include<stdio.h>
void Si_calculate(int n)
{
    float P,T,R,SI;
    int i=1;
    while(i<=n)
    {
        printf("enter P,T,R");
        scanf("%f%f%f",&P,&T,&R);
        SI=(P*T*R)/100;
        printf("%f",SI);
        i++;
    }

}
int main()
{
    int n ;
    printf("enter n");
    scanf("%d",&n);
    Si_calculate(n);
    return 0;
}
