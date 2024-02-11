#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while(k--){
        string s;
        cin >> s;
        int i, leng=0, ab1=0, ba1=0;
        leng = s.length();
        for(i=0; i<leng; i++){
            if(s[i] == 'a' && s[i+1] == 'b'){
                ab1++;
            }
            else if(s[i] == 'b' && s[i+1]=='a'){
                ba1++;
            }
        }
        if(ab1 == ba1){
            cout << s << endl;
        }
        else{
            if(s[0]=='a'){
                s[0] = 'b';
                cout << s << endl;
            }
            else{
                s[0]='a';
                cout << s << endl;
            }
        }
    }
}