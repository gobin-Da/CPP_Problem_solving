#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c, res1=0, res2=0, res3=0, maxi=0;
        cin >> a >> b >> c;
        
        if(a >= b){
            if(a > c){
                maxi = a;
            }
            else{
                maxi = c;
            }
        }
        else{
            maxi = b;
        }
        
        if(maxi <= 0){
            res1 = maxi + 1;
            res2 = maxi + 1;
            res3 = maxi + 1;

            cout << res1 << " " << res2 << " " << res3 << endl;
        }
        else if(maxi == a){
            res1 = (maxi - a);
            res2 = (maxi - b) + 1;
            res3 = (maxi - c) + 1;

            cout << res1 << " " << res2 << " " << res3 << endl;
        }

        else if(maxi == b){
            res1 = (maxi - a) + 1;
            res2 = (maxi - b);
            res3 = (maxi - c) + 1;

            cout << res1 << " " << res2 << " " << res3 << endl;
        }

        else if(maxi == c){
            res1 = (maxi - a) + 1;
            res2 = (maxi - b) + 1;
            res3 = (maxi - c);

            cout << res1 << " " << res2 << " " << res3 << endl;
        }
    }
}