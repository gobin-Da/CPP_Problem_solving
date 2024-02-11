#include <iostream>
using namespace std;
int main()
{
    int N,i;
    char m[20];
    cin >> N ;
    int ans=0;
    for (i=65; i<122; i++) cin>>m[i]; {
        ans = ans + m[i];
    }

    cout << ans;
    return 0;
}
