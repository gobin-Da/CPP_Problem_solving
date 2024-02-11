#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int ar[t];

    int i ;
    for(i=0; i<t; i++){
        cin >> ar[i];
    }
    int sum = 0;

    if(ar[i] != 0){
        sum = sum + (ar[i-1] + ar[i+1]) + 1;
    }

    else if(ar[i] == 0){
        sum = sum + (ar[i] + ar[i+1]) + 1;
    }
    cout << sum << endl;
}