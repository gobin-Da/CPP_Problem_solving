#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, str, reverse;
    int i;

    cin >> s;
    cin >> t;

    for(i= 0; i < s.length(); i++){
        reverse = s[i] + reverse;
    }

    if(t == reverse){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}