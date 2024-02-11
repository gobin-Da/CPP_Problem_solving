#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, i,j, pair=0, a=0, mod=0, num1=0, num2=0;
        cin >> n;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }

        a = n/2;

        sort(ar, ar+n);

        for(i=n-1; i>=0; i++){
            for(j=0; j<n; j++){
                mod = ar[i] % ar[j];
                if(mod != a){
                    num1 = ar[i];
                    num2 = ar[j];
                }
            }
        }
        cout << num1 << " " << num2 << endl;
    }
}