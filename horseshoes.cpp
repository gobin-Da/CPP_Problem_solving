#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i, cnt=0;
    int ar[4];
    for(i=0; i<4; i++){
        cin >> ar[i];
    }
    sort(ar, ar+4);
    for(i=0; i<4; i++){
        if(ar[i] == ar[i+1]){
            cnt++;
        }
    }

    cout << cnt << endl;
}