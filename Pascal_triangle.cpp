#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int res=1;

    for(int i=1; i<=n; i++){
        res *= i;
    }
    
    return res;
}

int value(int n, int r)
{
    int dif = n-r;
    int r1, r2, r3;
    r1 = factorial(n);
    r2 = factorial(r);
    r3 = factorial(dif);

    int ans = r1 / (r2 * r3);
    cout << ans << " ";
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            value(i, j);
        }
        cout << endl;
    }
}