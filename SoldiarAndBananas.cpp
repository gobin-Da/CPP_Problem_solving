#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, w, i, sum=0, multi=0, total=0;
    cin >> n >> k >> w;
    for(i=1; i<=w; i++){
        multi = n * i;
        sum = multi + sum;
    }

    if(sum <= k){
        cout << 0 << endl;
    }
    else{
        total = sum - k;
        cout << total << endl;
    }
}