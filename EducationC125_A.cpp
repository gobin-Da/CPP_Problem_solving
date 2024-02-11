#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n, i, j, sumA=0, sumB=0, total=0;
        cin >> n;
        int a[n], b[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(j=0; j<n; j++){
            cin >> b[j];
        }

        for(i=0; i<n-1; i++){
            sumA += (a[i] - a[i+1]);
        }

        for(j=0; j<n-1; j++){
            sumB += (b[j] - b[j+1]);
        }

        total = sumA + sumB;
        cout << total << endl;
    }
}