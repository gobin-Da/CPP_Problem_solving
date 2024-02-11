#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, dif=0, bend=0;
    cin >> n >> k;
    int ar[n];
    bend = n;
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    for(i=0; i<n; i++){
        if(ar[i] > k){
            bend++;
        }
    }
    cout << bend << endl;
}