#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3], i, dif=0, dif2=0, ans=0;
    for(i=0; i<3; i++){
        cin >> ar[i];
    }
    sort(ar, ar+3);
    for(i=0; i<2; i++){
        dif = abs(ar[i] - ar[i+1]);
        ans += dif;
    }

    cout << ans << endl;
}