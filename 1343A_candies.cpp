#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll num, ans=0, i;
        cin >> num;
        for(i=3; i<20000; i+=2){
            if(num%i==0){
                ans = num/i;
                
            }
        }
        cout << ans << endl;
    }
}