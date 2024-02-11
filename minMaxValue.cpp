#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
   ll ar[5] , max = 0, min = 0,i , x = 0, y = 0 , fin1=0 , fin2=0;
   ll n = sizeof(ar)/sizeof(ar[0]);
   for(i=0; i<5; i++){
        cin >> ar[i];
        x = *min_element(ar, ar+n);
        y =  *max_element(ar, ar+n);
        max = max + ar[i] ;    
   }
    fin1 = max - x;
    fin2 = max - y;
    cout << fin2 << " " << fin1 << endl;
}