#include <stdio.h>

int main()
{
    int first,second;
    second = 18;
    scanf("%d", &first);

    if(first >= second)
        printf("You can vote\n");
    else
        printf("You cant vote\n");
    return 0;
}
