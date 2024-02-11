#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, i, j, even = 0 , odd = 0;
        cin >> n;
        a = 2 * n;
        int ar[a];       
        for(i=0; i<a; i++){
            cin >> ar[i];
        
        if(ar[i] % 2 == 0){
                even++;
            }
        else {
                odd++;
            }
        }
        if(even == odd){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}