#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, dif=0, f=0;
        cin >> n;
        int ar[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        for(i=0; i<=n-1; i++){
            if(dif <= 3){
                dif = (ar[i+1] - ar[i]);
                f = 1;
            }
            else{
                f = 0;
                break;
            }
        }

        if(f==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}