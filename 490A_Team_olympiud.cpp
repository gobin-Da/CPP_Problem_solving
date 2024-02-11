#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a=1, b=1, c=1, j, k, min=0, one=0, two=0, thre=0;
    cin >> n;
    int ar[n];
    for(i=1; i<=n; i++){
        cin >> ar[i];
    }

    for(i=1; i<=n; i++){
        if(ar[i] == 1){
            one++;
        }
        else if(ar[i] == 2){
            two++;
        }
        else{
            thre++;
        }
    }

    if(one < two){
        if(one < thre){
            min = one;
        }
        else{
            min = thre;
        }
    }
    else{
        if(two < thre){
            min = two;
        }
        else{
            min = thre;
        }
    }

    cout << min << endl;

    while(min > 0){
        for(i=a; i<=n; ++i){
            if(ar[i] == 1){
                cout << i << " ";
                a = i+1;
                break;
            }
        }
        for(j=b; j<=n; ++j){
            if(ar[j] == 2){
                cout << j << " ";
                b = j+1;
                break;
            }
        }
        for(k=c; k<=n; ++k){
            if(ar[k] == 3){
                cout << k << " ";
                c = k+1;
                break;
            }
        }
        cout << endl;
        min--;
    }
}