#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, g=0;
    cin >> t;
    while(t--)
    {
        g++;
        int n, i, rem1=0, rem2=0;
        cin >> n;

        while(n != 0){
            rem1 += n%2;
            n = n/2;
        }

        for(i=n; i<11; i++){
            for(int j=0; j<=1; j++){
                while(i!=0){
                    rem2 += i%2;
                    i = i/2;
                }
            }
        }

        cout << rem2 << endl;
    }
}