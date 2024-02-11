#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, div=0, add=0;
    cin >> n >> m;
    add = (n-1) / (m-1);
    div = add + n;
    cout << div << endl;
}