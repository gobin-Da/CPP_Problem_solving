#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0, div=0, mean=0, i, ans=0, sum1=0, sum2=0, div2=0;
        cin >> n;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
            sum += ar[i];
        }
        mean = sum / n;
        
        for(i=0; i<n; i++){
            if(ar[i] / ar[0] == 1){
                ans++;
            }
        }
        if(ans == n){
            cout << ar[0] - 2 << endl;
        }

        for(i=0; i<n; i++){
            if(ar[i] != ar[i+1]){
               sum1 += ar[i]; 
            }
            div = sum1 / n;
        }
        for(i=0; i<n-2; i++){
            sum2 += ar[i];
        }
        div2 = sum2 / (n-2);
        if(div2 == mean){
            cout << mean - 2 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}