#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,m,a[55];
    cin>>t;
    while(t--){
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        if(m == 1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+m);
        vector<int>vr;
        int dif = 0;
        for(int i=1; i<m; i++){
            dif = abs(a[i] - a[i-1]);
            vr.push_back(dif);
        }
        sort(vr.begin(), vr.end(), greater<int>());

        if(vr[0] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}