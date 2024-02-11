#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, cnt=0;
        cin >> n;
        int ar[n], br[n-1];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }

        for(i=0; i<n-1; i++){
           for(j=n-2; j>=0; j--){
                if(ar[i] == ar[j]){
                    cnt++;
                }
            }
        }

        if(cnt >= n-1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}