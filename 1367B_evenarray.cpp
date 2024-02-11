#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, even=0, odd=0;
        cin >> n;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        
        for(i=0; i<n; i++){
            if(i%2 != ar[i] %2){
                if(i%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        if(even == odd){
            cout << even << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}