#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, i, count = 0, arsize = 0;
    cin >> a;
    ll ar[a];
    for(i=0; i<a; i++)
        cin >> ar[i];

        arsize = sizeof(ar) / sizeof(ar[0]);
        sort(ar , ar + arsize);

        
    

    for (i = 0; i < a; ++i){
            if(ar[i] == ar[i+1]){
                i++;
                count++;  
            }  
        }
        
    cout << count << endl; 
}