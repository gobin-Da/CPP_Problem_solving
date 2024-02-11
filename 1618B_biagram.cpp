#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, size=0;
        cin >> n;
        size = (n-2)*2;
        char ch[size];

        for(i=0; i<size; i++){
            cin >> ch[i];
        }

        if(n > 5){
             cout << ch[0] << ch[1];
            for(i=2; i<n; i++){
                if(ch[i] == ch[i+1]){
                    cout << ch[i];
                    i+=2;
                }
                else{
                    cout << ch[i];
                    
                }
            }
            cout << ch[size-1];
            cout << endl;
        }

        else{
            cout << ch[i];
            for(i=0; i<n; i++){
                if(ch[i] == ch[i+1]){
                    cout << ch[i] << ch[i+1];
                }
            }
            cout << endl;
        }
       
    }
}