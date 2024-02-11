#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a, sum=0, m;
    cin >> n >> a;
    m = n/2;
    if(a <= m){
        for(i=1; i<n; i++){
            if(i%2 != 0){
                sum++;
                if(sum == a){
                    cout << i << endl;
                }
            }
        }
    }
    else{
        
    }
}