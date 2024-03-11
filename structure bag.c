#include<stdio.h>

struct bag
    {
        char brand[20];
        char model[20];
        char purpose[20];
        int zips;
        float capacity;
        char colour[10];
    }b1;

int main()
{
    gets(b1.brand);
    gets(b1.model);
    gets(b1.purpose);
    gets(b1.colour);
    scanf("%d %f",&b1.zips,&b1.capacity);
    printf("%s %s %s %d %f %s",b1.brand,b1.model,b1.purpose,b1.colour,b1.zips,b1.capacity);
    return 0;
}
