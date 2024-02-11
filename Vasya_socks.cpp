#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, dif=0, mul=0, add=0, ans=0;
    cin >> n >> m;
    ans = (n-1) / (m-1);
    add = n + ans;
    cout << add << endl;
}