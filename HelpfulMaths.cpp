#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ans = " ";
    cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] != '+')
            ans += s[i];
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        
        if(i == ans.size() - 1){
            cout << ans[i];
            break;
        }
        else cout << ans[i] << "+";
    }
    
}