#include <stdio.h>
int main()
{
    int a ;
    float n;

    scanf("%d" , &a);
    scanf("%f" , &n);

    float t;
    t = (n / 28) * 100;
    
    if(n  >= 25.2 && n <= 28){
        float i  = 5.0;
        printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 23.8 && n < 25.2){
        float i = 4.5;
        printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 22.4 && n < 23.8){
       float i = 4.0 ;
       printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 21 && n < 22.4){
       float i = 3.5;
      printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 19.6 && n < 21 ){
       float i = 3.0;
      printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 18.2 && n < 19.6 ){
      float  i = 2.5;
        printf("%d %.1f %.2f", a , i,t);
    }

    else if(n  >= 16.8  && n < 18.2 ){
       float i = 2.0;
       printf("%d %.1f %.2f", a , i,t);
    }

    else {
       float i = 0.0 ;
       printf("%d %.1f %.2f", a , i,t);
    }


    return 0;
}