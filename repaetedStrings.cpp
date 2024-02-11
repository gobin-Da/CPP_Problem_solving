#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string str;
    ll k, i, count=0, div=0, ans=0, mod=0;
    cin >> str;
    cin >> k;

    ll n = str.size();

    div = k / n;
    mod = k%n;

    for(i=0; i<n; i++){
        if(str[i] == 'a'){
            count++;
        }
    }
        
    if(mod == 0){
        ans = count * div;
        cout << ans << endl;
    }
    else{
        for(i=0; i<mod; i++){
            if(str[i] == 'a'){
                ans = (count * div) + 1;
                cout << ans << endl;
            }
        } 
    }      
} 