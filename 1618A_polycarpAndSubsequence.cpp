#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, max=0, a, b, c, cc;
        a=b=c=cc=0;
        int ar[7];
        for(i=0; i<7; i++){
            cin >> ar[i];
        }
        max = *max_element(ar, ar+7);
        c = max - (ar[0] + ar[1]);
        cout << ar[0] << " " << ar[1] << " " << c << endl;    
    }
}