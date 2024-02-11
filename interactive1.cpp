#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll l=0, r=1000000;
    while(true){
        ll mid = (l+r)/2;

        cout << mid << endl;


        string s;
        cin >> s;

        if(s=="Bigger") l = mid;

        else if(s=="Smaller") r = mid;

        else{
            cout << mid << endl;
            return 0;
        }
    }
    return 0;
}