#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, l, r, k, i, cnt=0, tot=0;
        cin >> n >> l >> r >> k;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        sort(ar, ar+n);
        for(i=0; i<n; i++){
            if(ar[i] >= l && ar[i] <= r && ar[i] <= k){
                tot += ar[i];
                if(tot <= k){
                    cnt++;
                }
                else{
                    tot -= ar[i];
                    continue;
                }
                
            }
           
        }
        cout << cnt << endl;
    }
}