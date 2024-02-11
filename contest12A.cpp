#include <bits/stdc++.h>
using namespace std;
int main (){
   int g;
   cin>>g;
   while(g--){
       int a,b,ups=0;
       cin>>a;
       while(a--){
           cin>>b;
           if(b == 1 || b == 3){
               ups++;
           }          
       }
       cout<< ups <<endl;
   }
   
   return 0;
}