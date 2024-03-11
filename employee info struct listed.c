#include<stdio.h>
int main()
{
struct address
{
    char phone[15];
    char city[25];
    int pin;
};

struct emp
{
    char name[25];
    struct address a;
};

struct emp e={"Jeru","5234534","dfjesk",2323};
printf("%s %s %s %d",e.name,e.a.phone,e.a.city,e.a.pin);
}
