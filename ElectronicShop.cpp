#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll keyboard, drive, i, j, total, sum = -1;
    cin >> total >> keyboard >> drive ;
    ll ar[keyboard];
    ll br[drive];

    for(i = 0; i<keyboard; i++){
        cin >> ar[i];
    }

    for(j = 0; j<drive; j++){
        cin >> br[j];
    }

    for(i=0; i<keyboard; i++){
        for(j=0; j<drive; j++){
            if(ar[i] + br[j] <= total){
                sum = max(sum, ar[i] + br[j]);
            }
        }
    }
    cout << sum << endl;
    
}