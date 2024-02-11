#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++){
        int cnt = 1;
        for(int j = i+1; j<n; j++){
            if(s[i] == s[j]){
                cnt++;
            }else break;
        }
        if(cnt >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
