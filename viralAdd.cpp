#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, i, sum = 0, x = 0, div = 0;
    cin >> n;
    x = 5;
    while(n--){
        div = floor(x/2);
        x = div * 3;
        sum = sum + div;
    }
    
    cout << sum << endl;
}