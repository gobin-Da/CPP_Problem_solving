#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    long long mins = 0, ans = 0;
    long long a , x;
    cin >> a >> x;
    long long ar[a];
    for (i = 0; i < a; i++)
    {
        cin >> ar[i];
        mins = ar[i] - x;
        if(mins <= 0){
         ans++;
       } 

    }
     cout << ans << endl;
}