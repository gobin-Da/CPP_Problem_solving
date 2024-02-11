#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, days=0, rem=0;
    cin >> a >> b;
    days = min(a, b);
    rem = (max(a, b) - days)/2;
    cout << days << " " << rem << endl;
    return 0;
}