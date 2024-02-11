#include <bits/stdc++.h>
using namespace std;
string c,d;
int main() {
    cin >> c >> d;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] < 92) {
            c[i] += 32;
        }
        if (d[i] < 92) {
            d[i] += 32;
        }
    }
    if (c < d) {
        cout << -1;
    } else if (c > d) {
        cout << 1;
    } else if (c == d) {
        cout << 0;
    }
}