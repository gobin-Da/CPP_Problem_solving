#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ans(){
    ll x, n;
        cin >> x >> n;
        
        if(x % 2==0){
            if(n % 4 == 1){
                cout << x-n << endl;
            }
            else if(n % 4 == 2){
                cout << x + 1 << endl;
            }
            else if(n % 4 == 3){
                cout << x + n + 1 << endl;
            }
            else{
                cout << x << endl;
            }
        }
        else{
            if(n % 4 == 1){
                cout << x+n << endl;
            }
            else if(n % 4 == 2){
                cout << x - 1 << endl;
            }
            else if(n % 4 == 3){
                cout << x - n - 1 << endl;
            }
            else{
                cout << x << endl;
            }
        }
}
int main()
{
    ans();
    return 0;
}