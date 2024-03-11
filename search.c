#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void read(int num[50],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}

void write(int num[50],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }
}

void search(int num[50],int n)
{
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(num[i]==key)
        {
            printf("\nSearch successfull. %d found in list.",key);
            exit(0);
        }
    }
    printf("Search unsuccessfull. %d not found in list.",key);
}

int main()
{
    int num[50],n;
    scanf("%d",&n);
    if(n>0)
    {
        read(num,n);
        write(num,n);
        search(num,n);
    }
    else printf("array should be greater than 0.");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
