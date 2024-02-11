#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i<1; i++){
        if(s[0] < 97){
            cout << s << endl;
        }
        else{
            s[0] = s[0] - 32;
            cout << s << endl;
        }
    }
}