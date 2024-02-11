#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string ch, str;
        cin >> ch >> str;
        int m = str.size();
        int i=0, j=0, ar[m], ans=0;
        while(i<m){
            if(str[i] == ch[j]){
                ar[i] = j;
                i++;
                j=0;
            }
            else{
                j++;
            }
        }

        for(i=0; i<m-1; i++){
            ans = ans + abs(ar[i] - ar[i+1]);
        }

        cout << ans << endl;
    }
    return 0;
}