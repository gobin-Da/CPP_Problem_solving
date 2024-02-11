#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, cnt1=0, cnt2=0, ans=0, cnt3=0;
        cin >> n;
        char str[n];
        for(i=0; i<n; i++){
            cin >> str[i];
        }

        for(i=0; i<n; i++){
            if(str[i] == '0'){
                if(str[i+1] == '0'){
                    ans += 2;
                }
                else if(str[i+1]=='1' && str[i+2] == '0'){
                    ans += 1;
                    i += 1;
                }
                else{
                    i += 2;
                }
            }
        }
        cout << ans << endl;
    }
}