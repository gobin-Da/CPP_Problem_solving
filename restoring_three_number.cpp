#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, a,b,c, maxi=0, ar[4];
    for(i=0; i<4; i++){
        cin >> ar[i];
    }
    maxi = *max_element(ar, ar+4);
    sort(ar, ar+4);
    for(int i=0; i<3; i++){
        a = maxi - ar[i];
        cout << a << " ";
    }
    cout << endl;
}