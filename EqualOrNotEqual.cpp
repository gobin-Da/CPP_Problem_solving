#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;

        int i, n, cnt=0;

        cin >> str;

        n = str.length();

        for(i=0; i<n; i++){
            if(str[i] == 'N'){
                cnt++;
            }
        }

        if(cnt == 0){
            cout << "YES" << endl;
        }
        else if(cnt > 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}