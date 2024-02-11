/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    int i , j , gun;
    cin >> n >> m;
    int ar[n][m];
    gun = n*m;

    for(i=0; i<gun; i++){
        for(j=0; j<gun; j++){
            cin >> x;
            cout << ar[j][i] << endl;
        }
    }
} */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row;
    cout << "How many rows are there?" << endl;
    cin >> row;

    int col;
    cout << "How many columns are there?" << endl;
    cin >> col;

    int num;
    num = row * col ;
    int k, math;
    for(k = 1; k<num; k++){
      vector<vector<int>> values(col); //initialize outer vector with col inner vectors

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            values[i].push_back(k);
        }
    }
    

    /*vector<vector<int>> values(col); //initialize outer vector with col inner vectors

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            values[i].push_back(k);
        }
    } */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << values[i][j];
        }

        cout << endl;
    }
    }

    return 0;
}