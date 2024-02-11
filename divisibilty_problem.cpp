#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b, div=0;
        cin >> a >> b;
        if(a%b == 0){
            cout << 0 << endl;
        }
        else if(a<b){
            cout << b-a << endl;
        }
        else{
            cout << b-(a%b) << endl;
        }
    }
    return 0;
}