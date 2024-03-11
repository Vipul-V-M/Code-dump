#include<stdio.h>

struct browser
{
    char name[20];
    char copyright[20];
    float version;
};
struct browser read()
{
    struct browser b1;
    gets(b1.name);
    gets(b1.copyright);
    scanf("%f",&b1.version);
    return b1;
}
void display(struct browser b)
{
    printf("%s\n%s\n%f",b.name,b.copyright,b.version);
}
int main()
{
    struct browser b;
    b=read();
    display(b);
}
