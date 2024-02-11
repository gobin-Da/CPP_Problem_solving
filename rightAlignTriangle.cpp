#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, i, j, k;
    cin >> row;
    for(i=0; i<row; i++){
        for(j=row-2; j>=i; j--){
            cout << " ";
        }
        for(k=0; k<=i; k++){
            cout << "*";
        }
        cout << endl;
    }
}