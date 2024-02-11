#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, i, add=0, ans=0;
        cin >> a >> b;
        for(i=a; i<=b; i++){
            add += i;
        }

        ans = add % (a+b);
        cout << ans << endl;
    }
}