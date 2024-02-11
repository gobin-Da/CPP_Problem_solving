#include <bits/stdc++.h>
using namespace std;

void printPrime(int num3){
    bool flag = 0;
    for(int j=2; j<=sqrt(num3); j++){
        if(num3%j == 0){
            flag=1;
        }
    }
    if(flag==0){
        cout << num3 << endl;
    }
    
}

void allPrime(int num1, int num2){
    for(int i=num1; i<=num2; i++){
        printPrime(i);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    allPrime(a, b);
}