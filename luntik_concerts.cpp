#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, i, sum=0, mins=0, mul1=0, mul2=0, mul3=0;
        cin >> a >> b >> c;
        sum = a+b;
        if(sum == c){
            mul1 = a * 1;
            mul2 = b * 2;
            mins = abs((mul1 + mul2 + c) - (a+b+c));
        }
        else{
            mul1 = a * 1;
            mul2 = b * 2;
            mul3 = c * 3;
            mins = abs((mul1 + mul2) - mul3);
        }

        cout << mins << endl;
    }
}