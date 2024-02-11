#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        bool f=1;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }

        if(n % 2 == 0){
            f=1;
        }
        else{
            for(i=0; i<n-1; i++){
                if(ar[i] >= ar[i+1]){
                    f=1;
                    break;
                }
                else{
                    f=0;
                }
            }
        }

        if(f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}