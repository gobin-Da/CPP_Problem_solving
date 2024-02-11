#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, len=0;
    string str, ttr;
    cin >> str;
    cin >> ttr;
    
    for(i=0; i< str.length() ; i++){
        if(str[i] != ttr[i]){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
    cout << endl;
    return 0;
}