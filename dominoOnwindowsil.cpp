#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int g = 0; g<t; g++){
        int n , k1 , k2;
        cin >> n >> k1 >> k2;
        int w , b;
        cin >> w >> b;
        int c , d;
        if((k1 == k2) && (w == b)){
            cout << "YES" << endl;
        }
        else if((k1 != k2) && (w == b)){
            cout << "YES" << endl;
        }

        else if((k1 != k2) && (w != b)){
            c = k1 + k2;
            d = w + b;
            if(c > d){
                cout << "YES" <<endl;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}