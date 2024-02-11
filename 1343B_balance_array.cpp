#include <bits/stdc++.h>
typedef long long int ll;
long long int ar[1000000];
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, i, j, sum1=0, sum2=0;
        cin >> n;
        if(n%4 != 0){
            cout << "NO" << endl;
        }
        else if(n%4==0){
            cout << "YES" << endl;
            for(i=2; i<=n; i+=2){
                cout << i << " ";
                sum1 += i;
            }

            for(j=1; j<n-2; j+=2){
                cout << j << " ";
                sum2 += j;
            }
            cout << sum1-sum2 << endl;
        }

    }
}