#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }
    for(i=0; i<n; i++){
        if(ar[i] / ar[i+1] != 1){
            count++;
        }
    }
    cout << count << endl;
}