#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll num, ans=0, temp=0, temp1=0;
    cin >> num;
    if(num >= 0){
        cout << num << endl;
    }
    else{
        temp = num%10;
        num = num/10;
        temp1 = num%10;

        if(temp > temp1){
            ans = num - temp1 + temp;
            cout << ans << endl;
        }
        else{
            ans = num ;
            cout << ans << endl;
        }
    }
}