#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,count=0,count1=0;
    string s;
    cin>>s>>n;
    ll len=s.size();
    ll a=n/len;
    ll b=n%len;
    for(ll i=0;i<len;i++){
        if(s[i]=='a'){
            count++;
        }
    }
    for(ll i=0;i<b;i++){
        if(s[i]=='a'){
            count1++;
        }
    }
    ll ans=(count*a)+count1++;
    cout<<ans<<endl;
}