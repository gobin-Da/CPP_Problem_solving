#include <stdio.h>
#include <conio.h>
int main()
{
    char ch, upper[50] = "", lower[50]= "";
    int i=0;
    printf("Enter a line of text: ");
    gets(lower);
    while(lower[i] != '\0'){
        upper[i] = lower[i] - 32;
        i++;
    }
    printf("The upper string will be: %s", upper);
    getch();
    return 0;
}
