#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, j, cnt=0;
    cin >> n;
    int a[n], b[n];
    for(i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(i=0; i<n; i++){
        if(b[i] > a[i+1] && b[i] > b[i+1]){
            cnt++;
        }
        else if(b[i] < a[i+1] && b[i] < b[i+1] && a[i] < b[i+1]){
            cnt++;
        }
    }

    cout << cnt << endl;
}