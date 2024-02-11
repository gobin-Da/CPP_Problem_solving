#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0;
    cin >> n;
    string str;
    cin >> str;
    for(i=0; i<n; i++){
        str[i] = tolower(str[i]);
    }

    sort(str.begin(), str.end());
    for(i=0; i<n; i++){
        if(str[i] != str[i+1]){
            cnt++;
        }
    }
    if(cnt >= 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}