#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i,j, s,t, a,b, m,n, aple = 0, orange = 0 , count=0, mount=0;

    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    ll apl[m];
    ll ora[n];

    if(a<s && s<t && t<b){
        for(i=0; i<m; i++){
            cin >> apl[i];

            aple = abs(a + apl[i]);
            if(aple>=s && aple <=t){
                count++;
            }

        }

        for(j=0; j<n; j++){
            cin >> ora[j];

            orange = abs(b + ora[j]);
            if(orange>=s && orange <=t){
                mount++;
            }
        }
    }
    cout << count << endl;
    cout << mount << endl;
}