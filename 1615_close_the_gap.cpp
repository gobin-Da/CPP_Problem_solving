#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, i, j, max=0, min=0, dif=0, ans=0, add=0;
        cin >> n;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }

        for(i=0; i<n; i++){
            add += ar[i];
        }

        ans = add%n;

        if(ans == 0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}