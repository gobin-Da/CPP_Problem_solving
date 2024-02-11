#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, max=0, semax=0, cnt=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    max = semax = INT_MIN;

    for(i=0; i<n; i++){
        if(ar[i] >= max){
            semax = max;
            max = ar[i];
        }
        else if(ar[i] >= semax and ar[i] < max){
            semax = ar[i];
        }
    }
    cout << semax << endl;
}
    