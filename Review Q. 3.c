/* Program to calculate the shortest distance between 2 points*/
#include<stdio.h>
#include<math.h>
int main()
{
float x1,y1,x2,y2,s1,s2,dist;
printf("Enter coordinates of point P1: ");
scanf("%f %f",&x1,&y1);
printf("Enter coordinates of point P2: ");
scanf("%f %f",&x2,&y2);
s1=x2-x1;
s2=y2-y1;
dist=sqrt((s1*s1)+(s2*s2));
printf("The shortest distance between the point P1 and P2 is %.3f units",dist);
return 0;
}
