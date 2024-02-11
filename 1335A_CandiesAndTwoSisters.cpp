#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        double n;
        int div=0, cnt=0, rem=0;
        cin >> n;
        if(n>2){
            n = (n/2);
            div = ceil(n);
            rem = div  % 2; 
            if(rem == 0){
                cnt = div-1;
                cout << cnt << endl;
            }
            else{
                if(div + div >= n){
                    div = div-1;
                    cout << div << endl;
                }
                else{
                    cout << div << endl;
                }
            }
        }
        else{
            cout << "0" << endl;
        }
    }
}