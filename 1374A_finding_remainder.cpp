#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x,y,n,k=0,i,rem1=0,rem2=0, max=0;
        cin >> x >> y >> n;
        max = (n-y)/x *x+y;
        cout << max << endl;
    }
}