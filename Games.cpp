#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt(0);
    vector <int> g(n), b(n);
    for(int i=0; i<n; ++i){
        cin >> g[i] >> b[i];

        for(int j=0; j<i; ++j){
            if(g[i] == b[j]){
                cnt+=1;
            }
            if(b[i] == g[j]){
                cnt+=1;
            }
        }
    }

    cout << cnt << endl;

}