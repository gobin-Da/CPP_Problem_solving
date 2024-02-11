#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int len = str.length();
        int i, ab=0, ba=0;
        for(i=0; i<len; i++){
            if(str[i] == 'a' && str[i+1] == 'b'){
                ab++;
            }
            else if(str[i] == 'b'&& str[i+1] == 'a'){
                ba++;
            }
        }

        if(ab == ba){
            cout << str << endl;
        }
        else if(ab > ba){
            
        }
            
    }
    return 0;
}