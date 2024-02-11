#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll x1,x2,v1,v2, k1=0,k2=0;
    cin >> x1 >> v1 >> x2 >> v2;

    if(v1 > v2){
        k1 = k1 + v1;
        k2 = k2 + v2;
        
        if(k1!=k2){
            k1 = k1 + v1;
            k2 = k2 + v2;
        }
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}