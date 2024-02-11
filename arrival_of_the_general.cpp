#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n], mx=0, mi=101, maxim, minim;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    for(int i=0; i<n; i++){
        if(mx < ar[i]){
            mx = ar[i];
            maxim = i;
        }
        if(ar[i] <= mi){
            mi = ar[i];
            minim = i;
        }
    }
    if(maxim > minim){
        minim++;
    }
    cout << maxim + (n-1) - minim << endl;
}