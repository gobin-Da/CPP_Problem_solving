#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, dif=0, i, mul=0, cnt=0;
    cin >> n >> k;
    dif = 240 - k;
    for(i=1; i<=n; i++){
        mul = mul + (i*5);
        if(mul <= dif){
            cnt++;
        }
    }
    cout << cnt << endl;
}