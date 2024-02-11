#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, div=0;
    double t;

    cin >> a;
    if(a <= 5){
        cout << "1" << endl;
    }

    else{
        if(a%5 == 0){
            div = a/5;
            cout << div << endl;
        }
        else{
            div = (a/5) + 1;
            cout << div << endl;
        }
    }
}