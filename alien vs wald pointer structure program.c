#include<stdio.h>
typedef struct
{
    int hh;
    int mm;
}TIME;

void read(TIME *ptr)
{
    scanf("%d %d",&ptr->hh,&ptr->mm);
}

void display(TIME *ptr)
{
    printf("Blast time is %d:%d",ptr->hh,ptr->mm);
}

TIME add(TIME *lt,TIME *tt)
{
    TIME bt;
    bt.hh=lt->hh+tt->hh;
    bt.mm=lt->mm+tt->mm;
    if(bt.mm>60)
    {
        bt.mm-=60;
        bt.hh++;
    }
    if(bt.hh>23)
    bt.hh-=24;
    return bt;
}

int main()
{
    TIME lt,tt,bt;
    read(&lt);
    read(&tt);
    bt=add(&lt,&tt);
    display(&bt);
}
