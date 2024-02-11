#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, i, j, k, equation=0, count=0;
    cin >> n;

    int a[n], b[n];

    for(i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    k = 0;
    equation = b[0];

    for(i=0; i<n; i++){

        if(k < equation){
            equation = abs((equation - a[i+1]) + b[i+1]);
            k = equation;
        }
    }

   
    cout << k << endl;
}