#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number of array: ");
    scanf("%d", &num);
    int ar[num];
    printf("Enter the numbers to reverse: ");
    for(i=0; i<num; i++){
        scanf("%d", &ar[i]);
    }
    printf("The reersed numbers are: ");
    for(i=num-1; i>=0; i--){
       printf("%d ", ar[i]);
    }
}