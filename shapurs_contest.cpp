#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, len1=0, len2=0;
    char str[100], ttr[100], jkr[100];
    cin >> str;
    cin >> ttr;
    len1 = strlen(str);
    for(i=0; i<len1; i++){
        for(j=0; j<len1; j++){
            if(str[i] != ttr[j]){
                for(k=0; k<len1; k++){
                    jkr[k] = '1';
                }
            }
            else{
                for(k=0; k<len1; k++){
                    jkr[k] = '0';
                }
            }
        }
    }
    for(k=0; k<len1; k++){
        cout << jkr[k];
    }
    cout << endl;
    return 0;
}