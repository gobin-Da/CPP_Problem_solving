#include <stdio.h>
double myfunc();
int main(void){
    printf("%f" , myfunc(10.2));
    return 0;
}
double myfunc(double num){
    return num/2.0;
}
