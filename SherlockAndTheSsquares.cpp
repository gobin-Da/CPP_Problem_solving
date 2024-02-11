#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
       ll a, b;
       cin >> a >> b;
       ll r = (ll) sqrt(b) - (ll) sqrt(a);

       if(sqrt(a) - (long)sqrt(a) == 0){
           r++;
       }
       cout << r << endl;
    }               
}