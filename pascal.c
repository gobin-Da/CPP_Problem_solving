#include <stdio.h>
int main()
{
    int row, space, i, j, k=1;
    printf("Enter the number of row's: ");
    scanf("%d", &row);

    for(i=0; i<row; i++){
        for(space=1; space<= row - i; space++)
            printf("  ");
        
        for(j=0; j<=i; j++){
            if(j==0 || i==0)
                k=1;
            
            else
                k = k* (i-j + 1)/j;
            
            printf("%4d", k);
        }
        printf("\n");
    }
    return 0;
}