#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(n==m){
        if(n%2 != 0){
            cout << "Akshat" << endl;
        }
        else{
            cout << "Malvika" << endl;
        }
    }
    else if(n>m){
        if(m%2 != 0){
            cout <<  "Akshat" << endl;
        }
        else{
            cout << "Malvika" << endl;
        }
    }
    else if(n<m){
        if(n%2 != 0){
            cout <<  "Akshat" << endl;
        }
        else{
            cout << "Malvika" << endl;
        }
    }
}