#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m, i;
        cin >> n;
        m = n/2;
        if(m%2 != 0){
            cout << "YES" << endl;
            for(i=1; i<=n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}