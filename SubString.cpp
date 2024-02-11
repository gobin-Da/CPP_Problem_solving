#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i;
        for(i=0; i<s.length(); i++){
            cout << s[0];
            break;
        }
        for(i=1; i<s.length(); i++){
            if(s[i] == s[i+1]){
                cout << s[i];
                i+=1;
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
}