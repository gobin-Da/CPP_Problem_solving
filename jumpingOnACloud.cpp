#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ans=0, i;
    cin >> num;
    int ar[num];
    for(i=0; i<=num-1; i++){
        cin >> ar[i];
    }

    for(i=0; i<=num-1; i++){
        if(ar[i] == ar[i+1]){
            if(ar[i+1] == ar[i+2]){
                ans++;
                i++;
            }
            else{
                ans+=2;
                i+=2;
            }
        }
        else{
            if(i == num-1){
                break;
            }
            else{
                i++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}