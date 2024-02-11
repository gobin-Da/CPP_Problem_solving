#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    int sum = 0;
    for (i=0; i<=100; i++){
        sum = sum + i;
    }

    printf("Sum of all numbers 1 to 100 is : %d", sum);
    return 0;
}
