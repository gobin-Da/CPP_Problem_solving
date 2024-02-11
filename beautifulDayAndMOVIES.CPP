#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i, j, k, a, b, count = 0, minus = 0, revNum = 0, sizea = 0;
    cin >> i >> j >> k;
    
    for(a=i; a<=j; a++)

    
    if(a > 0){
        revNum = (revNum * 10) + (a%10);
        a = a/10;
    } 
    cout << revNum << endl;
}