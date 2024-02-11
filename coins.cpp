#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mod=0, cnt, sum=0;
    cin >> n;
    sum += n/100;
    mod = n%100;

    sum += mod/20;
    mod = mod%20;

    sum += mod/10;
    mod = mod%10;

    sum += mod/5;
    mod = mod%5;

    cout << sum+mod << endl;
}