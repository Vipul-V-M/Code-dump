#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    if (x>y&&x>z)
        printf("%d is maximum of the three",x);
    else if (y>x&&y>z)
        printf("%d is maximum of the three",y);
    else if (z>x&&z>y)
        printf("%d is maximum of the three",z);
    else printf("All the numbers are same hence %d is maximum",x);
    return 0;
}
