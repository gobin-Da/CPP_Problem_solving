#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while(k--){
        int n, i, res=0, m=0, mi=0;
        cin >> n;
        int ar[n];
        
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        m = *max_element(ar, ar+n);
        mi = *min_element(ar, ar+n);

        res = m - mi;
        cout << res << endl;
    }

    return 0;
}