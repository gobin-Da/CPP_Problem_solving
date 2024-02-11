#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, k, i, j, maxnum = 0, ans = 0;
    cin >> n >> k;
    ll ar[n];
    for(i=0; i<n; i++)
        cin >> ar[i];
        j = sizeof(ar) / sizeof(ar[0]);
    
        maxnum = *max_element(ar, ar + j);
        
        if(maxnum > k){
            ans = abs(k-maxnum);
            cout << ans << endl;
        }

        else if(maxnum <= k){
            cout << "0" << endl;
        }
    
}