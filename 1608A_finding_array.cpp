#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        if(n > 1){
            for(i=2; i<=n+1; i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}