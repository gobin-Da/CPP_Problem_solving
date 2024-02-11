#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num1, num2, pow1, pow2, m=0;
    cin >> num1 >> num2;
    pow1 = num1 / num2;
    pow2 = num2 / num1;
    if(num1 == 1 && num2 != 1){
       cout << "<" << endl;
    }
    else if(num1 != 1 && num2 == 1){
        cout << ">" << endl;
    }
    else if((abs(num1 - num2) == num1) || (abs(num1 - num2) == num2)){
        cout << "=" << endl;
    }
    else if(num1 - num2 == 0){
        cout << "=" << endl;
    }
    else if(num1 <= 9 && num2 <= 9){
        int p1 = pow(num1, num2);
        int p2 = pow(num2, num1);
        if(p1 > p2){
            cout << ">" << endl;
        }
        else{
            cout << "<" << endl;
        }
    }
    else if(num1 < num2){
        cout << ">" << endl;
    }
    else if(num1 > num2){
        cout << "<" << endl;
    }
    return 0;
}