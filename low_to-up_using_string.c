#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a line of atring: ");
    gets(str);
    printf("The uppercase of the given string will be: %s", strupr(str) );
    getch();
    return 0;
}