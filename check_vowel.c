#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, vow=0, cons=0;
    char ch[100];
    gets(ch);
    strupr(ch);
    n = strlen(ch);
    for(i=0; i<n; i++){
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            vow++;
        }
        else{
            cons++;
        }
    }

    printf("Vowel : %d" ,vow);
    printf("\nConsonant : %d", cons);
}