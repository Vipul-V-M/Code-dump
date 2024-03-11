#include<stdio.h>
#include<stdlib.h>

void colours(int R,int G,int B)
{

    float W,C,M,Y,Black,max;
    max=high(R,G,B);
    W=max/255.0;
    C=(W-R/255.0)/(W);
    M=(W-G/255.0)/(W);
    Y=(W-B/255.0)/(W);
    Black=1-W;
    printf("White=%.2f\nCyan=%.2f\nMagenta=%.2f\nYellow=%.2f\nBlack=%.2f",W,C,M,Y,Black);
    return;
}

float high(int R,int G,int B)
{
    float max;
    if(R>G&&R>B)
        max=R;
    else if(G>R&&G>B)
        max=G;
    else max=B;
    return max;
}

int main()
{
    int R,G,B;
    printf("Enter values of R,G and B: ");
    scanf("%d %d %d",&R,&G,&B);
    if(R==0&&G==0&&B==0)
    {
        printf("White=0\nCyan=0\nMagenta=0\nYellow=0\nBlack=1");
        exit(0);
    }
    if((R>=0&&R<256)&&(G>=0&&G<256)&&(B>=0&&B<256))
    {
        colours(R,G,B,max);
    }
    else printf("Invalid Input.");
    return 0;
}
