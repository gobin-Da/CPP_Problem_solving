#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int f1=0, f2=1, temp;
    cout << f1 << " ";
    cout << f2 << " ";
    
    for(int i=1; i<n; i++){
        temp = f1+f2;
        f1 = f2;
        f2 = temp;
        cout << temp << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    fib(n);
}