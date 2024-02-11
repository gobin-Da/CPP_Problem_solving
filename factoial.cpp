#include <iostream>
using ll = unsigned long long int;
using namespace std;
int main (){
    ll tc,x;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>x;
        if(x>4611686018427387903){
            x=0;
        }
        for(int i=x-1;i>0;i--){
            x*= i;
        }
        if(x==0){
            x=1;
        }
        cout<<"Case "<<i<<": "<<x<<endl;
        
    }
    return 0;
}