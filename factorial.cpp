#include <bits/stdc++.h>
using namespace std;

void factorial(int n){
    int res=1;
    if(n==0){
        cout << 1 << endl;
    }
    else{
        for(int i=1; i<=n; i++){
            res *= i;
        }
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    factorial(n);
}