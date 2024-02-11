#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    int a,b,c;
    int cnt = 0;
    int mnt = 0;

    cin >> n;
    int ar[n];

    for(i=0; i<n; i++) cin >> ar[i];

    for(j=0; j<n; j++) {
        a = j/10;
        ++cnt;
    }

    cout << cnt << endl;
    return 0;
}
