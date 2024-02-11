#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n , k, i,j, count=0;
   cin >> n >> k;

   vector <int> ar(n);

   for(i=0; i<n; i++){
       cin >> ar[i];
   }

    // this is how we can multiply two array elements side by side with others also.

   for(i=0; i<n; i++){
       for(j=0; j<n; j++){
           if(i<j){
               if((ar[i] + ar[j]) % k == 0){
                   count++;
               }
           }
       }
   }
   cout << count << endl;
   return 0;
}