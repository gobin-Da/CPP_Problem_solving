#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll s, i, n,k,e, bd, bm, sum = 0, count = 0;
    cin >> s;
    ll ar[s];

    for(i=0; i<s; i++){
        cin >> ar[i];
    }

    cin >> bd >> bm;

    if(s > 1){
        for(n = 0; n<s; n++){
            sum = ar[n] + ar[n+1];
            if(sum == bd){
                    count++;
                    s--;
                    k++;     
                } 
        }
        cout << count << endl;
    }
    else if(s == 1){
        for(n = 0; n<s; n++){
            if(ar[n] == bd){
                count++;
            }
        }
        cout << count << endl;
    }
  
}