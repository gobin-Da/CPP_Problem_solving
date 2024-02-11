#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int g=0; g<t ; g++)
    {
        int a, b, c, c1 = 0, c2 = 0;
        cin >> a >> b >> c;
        c1 = abs(a-c);
        c2 = abs(b-c);

        if(c1 > c2){
            cout << "Cat B" << endl;
        }

        else if(c1 < c2){
            cout << "Cat A" << endl;
        }

        else if(c1 == c2){
            cout << "Mouse C" << endl;
        }
    }
}