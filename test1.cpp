#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        double c=n;
        b=round(c/3);
        a=n-(b*2);
        cout<<a<<" "<<b<<endl;
    }
}