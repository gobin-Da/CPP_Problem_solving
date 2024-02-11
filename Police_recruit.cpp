#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, pol=0, crime=0;
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++){
        cin >> ar[i];
    }

    for(i=0; i<n; i++){
        if(ar[i] < 0){
            if(pol > 0){
                pol--;
            }
            else{
                crime++;
            }
        }
        else{
            pol += ar[i];
        }
    }
    cout << crime << endl;
}