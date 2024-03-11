#include<stdio.h>
#include<math.h>
float distance(float x1,float y1,float x2,float y2)
{

    float d;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}
int main()
{
    float x1,x2,y1,y2,d;
    printf("Enter the coordinates of first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of second point: ");
    scanf("%f %f",&x2,&y2);
    d=distance(x1,y1,x2,y2);
    printf("The distance between given points is %.2f units",d);
    return 0;
}
