#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n, i, count=0;
    cin >> n;
    string s;
    cin >> s;
    int r=0,
        g=0,
        b=0;

    for(int i=1; i<n; i++){
        if(s[i-1]==s[i]){
            if(s[i] == 'R'){
                ++r;
            }
            else if(s[i] == 'G'){
                ++g;
            }
            else if(s[i] == 'B'){
                ++g;
            }
        }
    }

    count = r+g+b;
    cout << count << endl;
    return 0;
}