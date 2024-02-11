#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        string s;
        cin.ignore(256,'\n');
        getline(cin , s);
        map <char, int> m;
        for(i=65; i<=97; i++){
            m[i] = 0;
        }
        bool f = false;
        for(i=0; i<n; i++){
            if(i != 0){
                if(s[i] != s[i-1] && m[s[i]]>0){
                    f = true;
                    cout << "NO" << endl;
                    break;
                }
            }
            m[s[i]]++;
        }
        if(!f){
            cout << "YES" << endl;
        }
    }
}