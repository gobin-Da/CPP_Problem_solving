#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, x , y, i, count = 0, mount = 0, max = 0, min = 0;
    cin >> a ;
    ll ar[a];
    for(i=0; i< a ; i++){
        cin >> ar[i];

        x = ar[i +  1];
        y = ar[i];
        if( x > y){
            count++;
            y = x;
        }

        else if(x < y){
            mount++;
            y = x;
        }
    }
    cout << count << " " << mount << endl;
}