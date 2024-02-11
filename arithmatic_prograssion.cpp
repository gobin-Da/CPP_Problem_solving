#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, am=0;
        cin >> a >> b >> c;
        am = a+(c-1)*b;
        cout << am << endl;
    }
}