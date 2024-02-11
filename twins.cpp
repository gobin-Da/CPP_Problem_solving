#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum=0, cnt= 0, ans=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
        sum += ar[i];
    }
    sum = sum/2;
    sort(ar, ar+n);
    for(i=n-1; i>=0; i--){
        ans += ar[i];
        cnt++;
        if(ans > sum){
            break;
        }
    }
    cout << cnt << endl;
}