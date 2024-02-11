#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int m, evens=0,finaleven=0, odds=0, i, pop;
    for(i=1; i<=num; i++){
        cin >> m;
        if(m % 2 == 0){
            evens += 1;
            finaleven = i;
        }
        else{
            evens -= 1;
            odds = i;
        }
    }

    cout << (evens > 0 ? odds : finaleven) << endl;
    return 0;
}