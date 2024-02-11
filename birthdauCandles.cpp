#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll c , i, max =0 ,count=0, div =0;
    cin >> c;
    ll ar[c];
    ll n = sizeof(ar)/sizeof(ar[0]);
    for(i=0; i<c; i++){
        cin >> ar[i];
        max = *max_element(ar, ar+n);
    }
    for(int i=0; i<c ; i++){
        div = ar[i] % max;
        if(div==0){
            count++;
        }
    }
    
    cout << count << endl;
}