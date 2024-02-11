#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a, cnt=0, ans=0 , dif=0;
    cin >> n >> k;
    a = k-1;
    int ar[n], i;
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    for(i=0; i<n; i++){
        dif = 5 - ar[i];
        if(dif >= k){
            cnt++;
        }
    }

    ans = cnt / 3;
    cout << ans << endl;
}