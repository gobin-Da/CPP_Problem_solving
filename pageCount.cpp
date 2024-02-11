#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, b, i, cnt = 0, mnt = 0;
   cin >> a >> b;
   for(i=1; i<b; i++){
       cnt++;
   }

   for(i=a; i>b; i--){
       mnt++;
   }
   mnt = mnt - 1;
   

   if(cnt >= mnt){
       cout << mnt << endl;
   }
   else{
       cout << cnt << endl;
   }
}