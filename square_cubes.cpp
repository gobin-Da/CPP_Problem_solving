#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, cnt=0;
        cin >> n;
        for(i=1; i<=n; i++){
            if(i*i <= n){
                cnt++;
            }
        }
        for(i=2; i<=n; i++){
            if(i*i*i <= n){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}