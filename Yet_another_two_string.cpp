#include <bits/stdc++.h>
using namespace std;;
int man()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, need = 0, ans;
        cin >> a >> b;
        need = abs(a-b);
        ans = ceil(need/10);
        cout << ans << endl;
    }
}