#include <stdio.h>
int main()
{
    int t;
    scanf("%d" , &t);
    while (t--){
    int roll;
    float day;

    scanf("%d" , &roll);
    scanf("%f" , &day);

    if(day >= 25.2 && day <= 28){
        float i = 5.0;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 23.8 && day < 25.2 ){
        float i = 4.5;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 22.4 && day < 23.8){
        float i = 4.0 ;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 21 && day < 22.4){
        float i = 3.5 ;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 19.6 && day < 21){
        float i = 3.0;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 18.2 && day < 19.6){
        float i = 2.5;
        printf("%d %.1f" , roll , i);
    }

    else if(day >= 16.8 && day < 18.2 ){
        float i = 2.0;
        printf("%d %.1f" , roll , i);
    }

    else {
       float i = 0.0 ;
       printf("%d %.1f" , roll , i);
    }

    }
    return 0;
}