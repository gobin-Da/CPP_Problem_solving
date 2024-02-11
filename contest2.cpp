#include <iostream>
using namespace std;
int main()
{
    int N,m;
    cin >> N;
    m = N * 2;
    if(N/N == 1){
        if(N/2) cout << N;

        else cout << m;
    }
    else cout << m;
    return 0;
}
