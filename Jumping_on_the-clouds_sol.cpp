#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, cnt = 0;
    cin >> n;
    int ar[102];
    for(i=0; i<n; i++){
        cin >>ar[i]; 
    }
    for(j=1; j<n; cnt++){
        if((ar[j+1]!=1) && (j <n-1)){
            j+=2;
        }
        else{
            j++;
        }
    }
    cout << cnt << endl;
    return 0;
}