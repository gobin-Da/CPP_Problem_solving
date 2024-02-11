#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    double tot, drinks;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }
    for(i=0; i<n; i++){
        tot += (double)ar[i]/2.0;
    }
    drinks = tot * (2.0 / (double)n);
    cout << setprecision(12) << drinks << endl;
    return 0;
}