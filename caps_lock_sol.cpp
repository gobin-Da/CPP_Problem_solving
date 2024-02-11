#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, len=0;
    char str[100];
    cin >> str;
    len = strlen(str);
    
    if(len > 4){
        cout << str << endl;
    }
    else{
        for(i=0; i<1; i++){
            if(str[0] >= 65 && str[0] <= 92){
                cout << str << endl;
            }
            else if(str[0] >= 97 && str[0] <= 122){
                str[0] -= 32;
                for(j=1; j<len; j++){
                    str[j] += 32;
                }
                cout << str << endl;
            }
        }
    }
    return 0;
}