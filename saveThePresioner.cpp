#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
     ll n,m,s,i, ans = 0, sub = 0;
    cin >> t;
    for(int g=0; g<t; g++){
        cin >> n >> m >> s;
        sub = (s+m -1) % n;
        if(sub > 0){
            cout << sub << endl;
        }
        else if(sub == 0){
            cout << n << endl;
        }
    }
}