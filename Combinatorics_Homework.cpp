#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int  main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c, m;
        int sum=0, div=0;
        cin >> a >> b >> c >> m;
        sum = a+b+c;
        if(m <= 0){
            cout << "YES" << endl;
        }
        else if(m > 0){
            if(sum > 3){
                div = sum / m;
                if(div >= m){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}