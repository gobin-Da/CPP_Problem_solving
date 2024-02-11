#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i, j, c=1;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                a[i+1] =- a[i+1];
            }
        }
        sort(a, a+n);
        for(i=0; i<n-1; i++){
            if(a[i] != a[i+1]){
                c++;
            }
        }
        cout << c << endl;
    }
}