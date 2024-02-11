#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=1, mx = 1;
    cin >> n;
    int steps[n];
    for(int i=0; i<n; i++){
        cin >> steps[i];
        if(i>0){
            if(steps[i] >= steps[i-1]){
                a++;
                mx = max(mx, a);
            }
            else{
                a = 1;
            }
        }
    }
    cout << mx << endl;
    return 0;
}