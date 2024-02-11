#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, count=0, sub=0, ans=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    for(i=0; i<n; i++){
        count = 0;
        for(j=0; j<n; j++){
            if(ar[i] == ar[j])
                count++;
        }
        if(count > sub)
            sub = count; 
    }

    ans =  abs(n - sub);
    cout << ans << endl;

    return 0;
}