#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, g=0;
    cin >> t;
    while(t--){
        g++;
        int i=0, value, rem1=0, rem2=0;
        cin >> value;
        while(value != 0){
            rem1 += value % 2;
            value = value / 2;
        }
        cout << rem1 << endl;
        i = value + 1;
        if(rem2 < rem1){
            i++;
            while(i>value){
                rem2 += value % 2;
                value = value / 2;
            }
        }
        else if(rem2 == rem1){
            cout << "Case " << g << ": " << value+i << endl;
        }
    }
}