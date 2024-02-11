#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int mp = m*b;
    int dif = abs(n - mp);
    int mul = dif * a;
    int ans = mul + mp;

    cout << ans << endl;
}