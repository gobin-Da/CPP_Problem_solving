#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, cnt=0, tot=0;
        bool f=1;
        string str;
        char s;
        cin >> n;
        cin >> str;

        for(i=0; i<n; i++){
            for(j=i; j<=n; j++){
                if(str[i] == str[j]){
                    tot++;
                }
                else{
                    cnt++;
                }
            }
        }
        if(cnt < tot){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}