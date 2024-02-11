#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, a, b, n, capacity = 0, stillnow = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;

        stillnow -= a;
        stillnow += b;

        capacity = max(capacity, stillnow);
    }
    cout << capacity << endl;
    return 0;
}