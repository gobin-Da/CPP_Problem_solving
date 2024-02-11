#include <bits\stdc++.h>
using namespace std;
int main()
{
    int k, r, i, rem=0, temp=0;
    cin >> k >> r;
    for(i=1; i<=9; i++){
        temp = k*i;
        rem = temp - r;
        if(temp % 10 == 0){
            cout << i << endl;
            break;
        }
        else if(rem % 10 == 0){
            cout << i << endl;
            break;
        }
    }
}