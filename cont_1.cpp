#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        int i;
        for(i=1; i<=n; i++){
            cin >> ar[i];
        }
        int min=0;
        for(i=1; i<=n; i++){
            if(ar[i] - i > min){
                min = ar[i] - i;
            }
        }
        cout << min << endl;
    }
}