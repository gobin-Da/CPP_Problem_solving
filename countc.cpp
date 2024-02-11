#include<iostream>
using namespace std;
int main()
{
    string s="Independenece_Day-2021_Computer_Club_CSE_RMSTU";
    int a=0;
    int c=s.size();
    for(int i=0;i<c;i++){
        if(s[i]=='c' || s[i]=='C'){
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}