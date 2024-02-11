#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, i , j, n, sum = 0, total = 0, bill = 0, ans = 0;
    cin >> a >> j;
    ll ar[a];
    for(i=0; i<a; i++){
        cin >> ar[i];
        sum = sum + ar[i];
    }
    total = sum - ar[j];

    cin >> n;

    bill = total / 2;

    if(bill == n){
        cout << "Bon Appetit" << endl;
    }

    else{
        ans = abs(bill - n);
        cout << ans << endl;
    }
    
}