#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char acc_no[30],title[30],name[30];
    float price;
    int flag;
}BOOK ;

void read(BOOK b[10],int n)
{

    printf("Enter the Book information:\n");
    for(int i=0;i<n;i++)
    {
    printf("\nAccession no.: ");
    scanf("%s",b[i].acc_no);
    printf("Title of the book: ");
    scanf("%s",b[i].title);
    printf("Author name: ");
    scanf("%s",b[i].name);
    printf("Price of book: ");
    scanf("%f",&b[i].price);
    printf("Status: ");
    scanf("%d",&b[i].flag);
    }
    return;
}

void display(BOOK b[10],int n)
{
    printf("\nThe books information is:\n");
    printf("Acc. no     Title     Author name     Price     Status\n");
    for(int i=0;i<n;i++)
    {
    printf("%s           %s         %s            %.2f        %d\n",b[i].acc_no,b[i].title,b[i].name,b[i].price,b[i].flag);
    }
}

void display_auth(BOOK b[10],int n,char auth[20])
{
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(b[i].name,auth)==0)
        {
            f=1;
            printf("%s   %s    %s    %.2f  %d",b[i].acc_no,b[i].title,b[i].name,b[i].price,b[i].flag);
        }
    }
    if(f==0)
        printf("No author found...");
    return;
}

int main()
{
    BOOK b[10];
    int n,ch;
    char auth[30],acc[30];
    printf("1) Read books information\n2) Display books information\n3) List of books by given author\n4) List of title of specified book\n5) List of books in order of accession number\n6) Exit");
    while(1)
    {
        printf("\nEnter the option:\n");
        scanf("%d",&ch);
        switch(ch)
        {
    case 1:
        printf("Enter the number of books: \n");
        scanf("%d",&n);
        read(b,n);
        break;
    case 2:
        display(b,n);
        break;
    case 3:
        printf("Enter author name:\n");
        scanf("%s",&auth);
        display_auth(b,n,auth);
        break;
    case 6:
        exit(0);
    default:
        printf("Invalid option.");
        }
    }
}
