#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int g=0; g<t; g++){
        int n;
        cin >> n;

        int a;
        cin >> a;
        int ar[a];
        for(int i = 0; i< n; i++){
            cin >> ar[i];
        }
        int asize = sizeof(ar) / sizeof(ar[0]);
        int x = (ar , ar + asize);
        sort(x);
        cout << x << endl;
    }
}