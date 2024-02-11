#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, max=0, ans=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    max = *max_element(ar, ar+n);
    
    for(i=0; i<n; i++){
        ans = ans + (max - ar[i]);
    }
    cout << ans << endl;
}