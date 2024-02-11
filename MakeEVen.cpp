#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string  a;
        cin >> a;


        int i, cnt=0;
       
        int s = a.length();

        if(a[s-1] % 2 == 0){
            cout << 0 << endl;
        }

        else if(a[s-1] % 2 != 0){
            for(i=0; i<s; i++){
                if(a[i]%2 == 0){
                    cnt = i+1;
                    break;
                }
                else{
                    cnt = -1;
                }
            }
            cout << cnt << endl;
        }

    }
}