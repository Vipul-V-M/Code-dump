#include <stdio.h>
#include <ctype.h>


int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }

    printf("String with first letter capitalized: %s\n", str);

    return 0;
}

