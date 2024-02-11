#include <bits/stdc++.h>
#include <iostream>
#include <vector>
typedef long long int ll;
using namespace std;
int main()
{
    vector <pair <ll, ll>> v;
    ll n, a, b, i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b; 
        v.push_back({b,a});
    }

    sort(v.begin(), v.end());

    ll r = v[0].first;
    ll ans = 1;

    for(i=1; i<n; i++){
        if(v[i].second >= r)
        {
            r = v[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}