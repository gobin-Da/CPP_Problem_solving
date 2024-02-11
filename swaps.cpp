#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n], i, j, result=0;
        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(j=0; j<n; j++){
            cin >> b[j];
        }

        if(a[0] > b[0]){
            for(j=0; j<n; j++){
                if(a[0] > b[j]){
                    result++;
                }
            }
            cout << result << endl;
        }
        else{
            result = 0;
            cout << result << endl;
        }
    }
}