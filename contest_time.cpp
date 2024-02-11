#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a1, a2, a3, i, ans=0, res=0;
        cin >> a1 >> a2 >> a3;
 
        
 
        if((a1+a3) / 2 == a2){
            res = (a1+a3) - (2*a2);
        }
        
        if((a1+a3) / 2 > a2){
            if(a1 > 1){
                a1 -= 1;
            }
            a2 += 1;
        }
 
        if((a1+a3) / 2 < a2){
            a1 += 1;
            a2 -= 1;
        }
        
        else{
            res = (a1+a3) - (2*a2);
        }
 
        cout << res << endl;
    }
}