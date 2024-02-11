#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;

    int ar[n];

    int cnt = 0 , mnt = 0;
    int i, j;
    float f;

    for(i=1; i<n; i++){
        cin >> ar[i];

         j = ar[k] ;
        f = (ar[i] % ar[k]);
    }
        if(f > 0){
            cnt++;
            mnt = cnt + 1;

            cout << mnt << endl;
        }

        else if(f == 0){
            cout << cnt << endl ;
        }
}