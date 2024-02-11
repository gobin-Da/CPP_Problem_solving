#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
         ll n, k, i, sizea = 0, count = 0;
        cin >> n >> k;
        
        ll ar[n];

        for(i=0; i<n; i++)
            cin >> ar[i];

            sizea = sizeof(ar) / sizeof(ar[0]);
            sort(ar, ar+sizea);

            for(i=0; i<n; i++){
                if(ar[i] <= 0){
                    count++;
                }
                else break;
            }
            
        if(count >= k){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
}