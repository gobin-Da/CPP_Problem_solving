#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, ans=0, j;
        cin >> n;
        int ar[n], br[n+1];
        for(i=1; i<=n; i++){
            cin >> ar[i];
        }

        for(i=1; i<=n; i++){
            ans += ar[i] * i;
        }
        cout << ans << endl;

        
        for(j=1; j<=n+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}