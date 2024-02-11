#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll i,j, m, n, k, sum = 0;
    cin >> n >> k;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    for(i=0; i<n; i++){
        for(j=1; j<n; j++){
            sum = ar[i] + ar[j];
        }
        cout << sum << endl;
    }
}