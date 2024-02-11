#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a==1 || b==1){
            cout << max(a, b) << endl;
        }

        else if(a%2 != 0 && b%2 != 0){
            cout << ((a*b)/2) + 1 << endl;
        }

        else if(a%2 == 0 && b%2 == 0){
            int m = max(a, b);
            if(m%4 == 0){
                cout << m*4 << endl;
            }
            else if(m%4 == 2) {
                cout << m*2 << endl;
            }
        }
    }
}