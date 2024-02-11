#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100] , t[100];
    int n, i, x, y, p, same = 0, notsame1 = 0, notsame2 = 0, total = 0, div = 0;
    cin >> s >> t;
    cin >> n;

    x = strlen(s);
    y = strlen(t);

    if(x>y)
        p = x;
    else
        p = y;
    
    for(i=0; i<p; i++){
        if(s[i] == t[i]){
            same++;
        }
        else{
            break;
        }
    }

    if(x+y <= n){
        cout << "Yes" << endl;
    }
    else if((n - (x+y - 2*same)) >= 0){
        if((n - (x+y - 2*same))%2 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
}