#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a, b;
        ll ans=0;
        cin >> a >> b;
        a = abs(a-b);
        ans = ceil(a/10);
        cout << ans << endl;
    }
}