#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p , q,i;
    cin >> p >> q;
    int ar[p] , br[q];
    for(i = 0; i<p; i++){
        cin >> ar[i];
    }

    for (i = 0; i < q; i++)
    {
        cin >> br[i];
    }

    if(ar[i] % br[i] == 0){
        cout << ar[i] << endl;
    }


    
}