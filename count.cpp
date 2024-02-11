#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll fin=0,cnt=0;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }


    for(int i=0; i<n; i++){
        if(ar[i] / ar[0] == 1){
            cnt++;
        }
    }

    if(cnt == n){
        fin = pow(ar[0], n);
    }
    cout << fin << endl;
}