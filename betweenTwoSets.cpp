#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, i, j, k, count=0;
    cin >> a >> b;

    int ar[a], br[b], cr[100];

    for(i=0; i<a;i++){
        cin >> ar[i];
    }

    for(j=0; j<b; j++){
        cin >> br[j];
    }

    for(i=0; i<a; i++){
        for(k=0; k<br[0]; k++){
            if(k % ar[i] == 0){
                cr[k];
            }
        }
    }

    n = sizeof(cr) / sizeof(cr[0]);

    for(j=0; j<b; j++){
        for(k=0; k<n; k++){
            if(br[j] % cr[k] == 0){
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}