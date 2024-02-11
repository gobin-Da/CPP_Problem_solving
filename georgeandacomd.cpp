#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p ,  q, i;
    int ar[n] , br[n];

     int ans = 0;
     int k;

    for(i=0; i<n; i++){
        cin >> ar[i] >> br[i];
        k = ar[i] + 2;
         if(br[i] >= k){
        ans++;
        }
    }
    cout << ans << endl;

}