#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,speed,time;
    printf("Enter coordinates of Mohan: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of Sohan: ");
    scanf("%f %f",&x2,&y2);
    printf("Enter the speed of car: ");
    scanf("%f",&speed);
    time=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))))/speed;
    printf("Mohan takes %.3f time to reach Sohan",time);
    return 0;
}
