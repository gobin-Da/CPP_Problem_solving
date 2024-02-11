#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sumOfDigit(int n){
    ll res=0;
    while(n > 0){
        res += n%10;
        n /= 10;
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, i, j, num, ans=0;
        cin >> a;
        for(i=1; i<=a; i++){
            cin >> num;
            ans += sumOfDigit(num);
        }
        
        
        if(ans%3 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}