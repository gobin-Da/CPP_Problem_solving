/* *********************************************************** */
    /*                  Om Namah                       */
   /*               Gobinda Bhattacharjee             */
  /*    Rangamati Science and Technology University  */
/* *********************************************************** */




#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    ll n, ans=0, i;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }
    for(i=0; i<n; i++){
        if(i != n-1){
            if(ar[i] > ar[i+1]){
                ans += (ar[i] - ar[i+1]);
                ar[i+1] += (ar[i] - ar[i+1]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}