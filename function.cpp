#include <iostream>
using namespace std;
int f(int x){
    return x*x + 2*x - 2;
}
int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
