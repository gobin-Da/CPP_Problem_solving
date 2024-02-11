#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, m, l, s, i,j;
        cin >> n >> m;
        cin >> l >> s;
        for(i=0; i<m; i++){
            n = n * 10;
        }

        for(j=0; j<s; j++){
            l = l * 10;
        }

        if(n > l){
            cout << ">" << endl;
        }
        else if(n < l){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }
    }
}