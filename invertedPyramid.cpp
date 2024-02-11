#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, i, j;
    cin >> row;
    for(i=row; i>0; i--){
        for(j = i; j>0; j--){
            cout << "* ";
            
        }
        cout << endl;
    }
}