#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, i, j, sum1=0, sum2=0;
        cin >> n >> k;
        int ar[n], br[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        for(j=0; j<n; j++){
            cin >> br[j];
        }

        for(i=0; i<n; i++){
            sum1 += ar[i];
        }
        for(j=0; j<n; j++){
            sum2 += br[j];
        }

        if(sum1 > sum2){
            cout << sum1 << endl;
        }
        else{
            cout << sum2 << endl;
        }
    }
}