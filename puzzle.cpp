#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, f=0, ans;
    cin >> n >> m;
    int ar[m], i;
    for(i=0; i<m; i++){
        cin >> ar[i];
    }

    sort(ar, ar+m);
    f = ar[m-1] - ar[0];
    for(i=n; i<=m; i++){
        ans = ar[i-1] - ar[i-n];
        ans = abs(ans);
        f = min(f, ans);
    }

    cout << f << endl;
}