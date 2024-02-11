#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, i, into = 0, total=0;
    cin >> n;
    into = n*3;
    int ar[into];

    for(i=0; i<into; i++){
        cin >> ar[i];

        total = total + ar[i];
    }

    if(total == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}