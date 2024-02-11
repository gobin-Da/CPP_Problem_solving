#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3], i, j, diag1=0, diag2=0, cout=0, sumr=0, sumc=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
}