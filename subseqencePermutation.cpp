#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, j=0, total=0;
        cin >> n;
        string s, k ;
        for(i=0; i<1; i++){
            cin >> s;
        }
        k = s;    
        sort(s.begin(), s.end());  
        for(i=0; i<n; i++){
            if(k[i] != s[i]){
                
                total++;
            }
        }
        cout << total << endl;

    }
}