#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, j, ans=0;
        cin >> n;
        int ar[n];
        bool f=false;
        for(i=1; i<=n; i++){
            cin >> ar[i];
        }
        for(i=1; i<n-1; i++){
            if(ar[i] != ar[i-1] && ar[i] != ar[i+1]){
                ans = i;
                f=true;
            }
        }
        if(f=true){
            if(ar[0] != ar[1]){
                cout << 1 << endl;
            }
            else if(ar[0] == ar[i]){
                cout << n << endl;
            }
            else{
                cout << ans << endl;
            }
        }
    }
}