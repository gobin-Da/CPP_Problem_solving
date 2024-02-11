#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, max=0, ans=0, min=0;
        cin >> a >> b;
        
        min = (a<b) ? a : b;

        min = 2 * min;

        max = (a>b) ? a : b;
        min = (max > min) ? max : min;
        min = min * min;
        cout << min << endl;
    }
}