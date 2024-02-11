    ///--------------------------------///
   ///                               ///
  ///  This code passed in pretest ///
 ///   (Gobinda Bhattacharjee )  ///
///----------------------------///



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, rem=0;
        cin >> n;
        rem = n-1;
        if(rem == 0){
            cout << rem << " " << n << endl;
        }
        else{
            cout << "-" << rem << " " << n << endl;
        }
    }
}