#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, j, step=0;
        cin >> n;
        char str[n], ttr[n];
        for(i=0; i<n; i++){
            cin >> str[i];
        }
        for(j=0; j<n; j++){
            cin >> ttr[j];
        }

        for(i=0; i<n; i++){
            if(str[i] == '0'){
                step++;
            }
            else if(str[i] == '1'){
                if(ttr[i] == '0'){
                    step++;
                }
            }
        }

        if(step == n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}