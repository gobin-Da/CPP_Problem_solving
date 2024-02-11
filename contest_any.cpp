#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, r1, c1, r2, c2, dif1=0, dif2=0, add=0, ans=0, tot=0;
        cin >> a >> b >> r1 >> c1 >> r2 >> c2 ;
        if(r1 == r2 || c1 == c2){
            cout << 0 << endl;
        }
        else{
            dif1 = abs(r1 - c1);
            dif2 = abs(r2 - c2);
            add = (dif1 * dif1) + (dif2 * dif2);
            ans = sqrt(add);
            if(ans == 0 || ans == 1){
                cout << a << endl;
            }
            else{
                cout << ans << endl;
            }
        }
    }
}