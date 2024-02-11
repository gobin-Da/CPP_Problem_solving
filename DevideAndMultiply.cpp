#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int j;
    cin >> j;
    while(j--){
        int a, i;
        cin >> a;
        ll b[a], n, count=0;
        for(i=0; i<a; i++){
            cin >> b[i];
        }

        for(i=0; i<a; i++){
            while(b[i] % 2 == 0){
                count++;
                b[i] = b[i] / 2;
            }
        }

        sort(b, b+a);
        n = b[a-1];
        while(count != 0){
            n =n * 2;
            count--;
        }
        for(i=0; i<a-1; i++){
            n += b[i];
        }
        cout << n << endl;
    }
}