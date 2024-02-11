#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double x, y;
        cin >> x >> y;
        double div = sqrt((x*x) + (y*y));
        int num = (int)div;
        
        if(x==0 && y==0){
            cout << 0 << endl;
        }
    
        else if(div == num){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}