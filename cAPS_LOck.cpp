#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, len=0;
    char str[100];
    cin >> str;
    len = strlen(str);

    if(len <=5){
        for(i=0; i<len; i++){
            if(str[i] >= 65 && str[i] <= 92){
                str[i] += 32;
            }
        }
        for(i=0; i<len; i++){
            if(str[0] >= 97 && str[0] <= 122){
                str[0] -= 32;
            }
        }

        cout << str << endl;
    }
    else{
        cout << str << endl;
    }
    return 0;
}