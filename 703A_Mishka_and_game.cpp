#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int m, c, cntm=0, cntc=0, i;
    for(i=0; i<t; i++){
        cin >> m >> c;
        if(m > c){
            cntm++;
        }
        else if(m < c){
            cntc++;
        }
    }
    if(cntm > cntc){
        cout << "Mishka" << endl; 
    }
    else if(cntm == cntc){
        cout << "Friendship is magic!^^" << endl; 
    }
    else{
        cout <<  "Chris"  << endl; 
    }
}