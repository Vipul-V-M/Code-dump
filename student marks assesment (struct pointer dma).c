#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char name[20];
    int a1;
    int a2;
    int a3;
    int a4;
    int total;
} RANK;

void read(RANK* s, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d %d", s[i].name, &s[i].a1, &s[i].a2, &s[i].a3, &s[i].a4);
    }
}

void display(RANK* s, int n)
{
    printf("\nName\tA1\tA2\tA3\tA4\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n", s[i].name, s[i].a1, s[i].a2, s[i].a3, s[i].a4);
    }
}

void sort(RANK* s, int n)
{
    RANK t;
    for (int i = 0; i < n; i++)
    {
        s[i].total = s[i].a1 + s[i].a2 + s[i].a3 + s[i].a4;
    }
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 0; j < n - k - 1; j++)
        {
            if (s[j].total < s[j + 1].total)
            {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}

void display_rank(RANK* s, int n)
{
    printf("\nName\tA1\tA2\tA3\tA4\tTotal\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", s[i].name, s[i].a1, s[i].a2, s[i].a3, s[i].a4, s[i].total);
    }
}

int main() {
    RANK* s;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    s = (RANK*)malloc(n * sizeof(RANK));
    printf("Enter student details:\n");
    read(s, n);
    printf("\nThe entered details are:\n");
    display(s, n);
    sort(s, n);
    printf("\nThe rank list is:\n");
    display_rank(s, n);
    free(s);

    return 0;
}
