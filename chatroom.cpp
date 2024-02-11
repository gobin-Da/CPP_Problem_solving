#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a = "hello";
    cin >> s;

    int n, i,j=0, pass = 0;
    n = s.size();

    for(i=0; i<n; i++){
        if(s[i] == a[j]){
            j++;
            pass++;

            if(pass == 5)
            break;
        }
    }

    if(pass == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}