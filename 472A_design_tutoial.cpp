#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,i, ans=0, rem=0, temp=0;
    cin >> n;
    for(i=3; i<n; i++){
        ans = n - i;
        if(i%2==0 && ans%2==0 && i+ans==n){
            cout << i << " " << ans << endl;
            break;
        }
        else if(i%2==0 && ans%3==0 && i+ans==n){
            cout << i << " " << ans << endl;
            break;
        }
    }
}