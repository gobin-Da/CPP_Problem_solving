#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cin >> num;
    int ar[num];
    for(i=0; i<num; i++){
        cin >> ar[i];
    }
    sort(ar, ar+num);
    for(i=0; i<num; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}