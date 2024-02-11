#include <bits/stdc++.h>
#define mem(ar, num) memset(ar, num, sizeof(ar))
using namespace std;
int main()
{
    long int z, c, i, j, s, n, ar, num;
    pair<int, int> p[1000];
    while(cin >> s >> n){
        c = 1;
        for(i=0; i<n; i++){
            cin >> p[i].first >> p[i].second;
        }
        sort(p, p+n);
        for(i=0; i<n; i++){
            if(s <= p[i].first){
                c=0;
                break;
            }
            else{
                s = s + p[i].second;
            }
        }

        if(c==0)
            cout <<  "NO" << endl;
        
        else
            cout << "YES" << endl;
        
    }
    return 0;
}