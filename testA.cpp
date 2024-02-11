#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll i, j, s,n,m,a,res = -1,keyboard[1001],usb[1001];

    cin >> s >> n >> m;
    for(i = 0; i < n; i++)cin >> keyboard[i];
    for(i = 0; i < m; i++)cin >> usb[i];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(keyboard[i]+usb[j] <= s)res = max(res,keyboard[i]+usb[j]);
        }
    }
    cout << res << endl;
}