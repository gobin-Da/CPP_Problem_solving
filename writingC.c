#include <stdio.h>
#include <math.h>
int main()
{
    int a[3][3],i, j, min;
    min = a[0][0];

    // taking input --

    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // minimum counting --
    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
             if(a[i][j] < min){
                 min = a[i][j];
             }
        }
    }

    // printing output --
    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
            a[i][j] = a[i][j] - min;
             printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}