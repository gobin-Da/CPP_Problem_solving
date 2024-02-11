#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,d=0,e=0;
        cin>>a>>b>>c;
            x=a-1;
            y=b-1;
            d=pow(10,x);
            e=pow(10,y);
            int j= __gcd(d,e);
            while(j==c){
                e=e+1;
                j= __gcd(d,e);
            }
            cout<<d<<" "<<e<<endl;

            if(a == 1 && b== 1){
                d = 1;
                e = 1;
                cout << d << " " << e << endl; 
            }
    }
}