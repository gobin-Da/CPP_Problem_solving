/* #include <stdio.h>
void sqr_it(int name);
int main(void)
{
    sqr_it(10.0);
    return 0;
}

void sqr_it(int num)
{
    printf("%d", num*num);
}

*/


#include <stdio.h>
int main()
{
    int count=1, sum=0, x=1;
    while(count != 10 ){
        
        sum = sum + x;
        count = count + 1;
        printf("%d", sum);
    }
}