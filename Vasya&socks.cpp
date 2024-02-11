#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, dif=0, mul=0;
    cin >> n >> m;
    dif = n/m;
    mul = dif/m;
    int ans = n + dif + mul;
    cout << ans << endl;
}