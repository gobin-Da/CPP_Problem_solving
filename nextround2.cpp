#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;

    int cnt = 0;
    float f , d;

    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];      
    }

    for(int i=0; i<n; i++){
        if(ar[i] > 0 && ar[i] >= ar[k-1]) {
            cnt++ ;
        }
    }
    cout << cnt << endl;
}