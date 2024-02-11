#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int count=0;
        if(s[n-1]%2==0){
            cout<<"0"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]%2==0){
                    count++;
                }
            }
            if(count==0){
                cout<<"-1"<<endl;
            }
            else{
                cout<<n-count<<endl;
            }
        }
    }
}