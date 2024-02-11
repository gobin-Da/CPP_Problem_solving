#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, g=0;
    cin >> t;
    while(t--){
        g++;
        long long r=1, c=1;
        long long a, b, n;
        cin >> n;

        c = a = ceil(sqrt(n));
        if(a%2 != 0){
            swap(c, r);
        }

        b = a*a;
        if((b-n) == 0){
            cout << "Case " << g << ": " << c << " " << r << endl;
        }
        else if((b-n) < a){
            r = a;
            c = c+1;
            if(a%2==0){
                swap(c, r);
            }
            cout << "Case " << g << ": " << c << " " << r << endl;
        }
        else if((b-n) >= a){
            c = a;
            long long d = ((b-n) - a) + 1;
            r = a - d;
            
            cout << "Case " << g << ": " << c << " " << r << endl;
        }
    }
}