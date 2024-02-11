#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, b , n, i, j, count=0, ans=0;
    cin >> a;
    ll ar[a];
    for(i=0; i<a; i++){
        cin >> ar[i];
    }
        n = sizeof(ar)/sizeof(ar[0]);
        sort(ar, ar+n);
        for(i=0; i<a; i++){
            cout << ar[i] << " ";
        }   
    

    cin >> b;
    ll br[b];
    for(j=0; j<b; j++){
        cin >> br[j];
    }

    if(br[j] < ar[i]){
        cout << a+1 << endl;
    }
    else cout << a << endl;
}