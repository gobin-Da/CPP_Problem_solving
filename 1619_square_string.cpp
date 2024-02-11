#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int size=0, i, j, cnt=0;
        string str;
        cin >> str;
        size = str.length();
        if(size % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            for(i=0; i<size; i++){
                if(str[i] == str[i+size/2]){
                    cnt++;
                }
            }
            if(cnt == size/2){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}