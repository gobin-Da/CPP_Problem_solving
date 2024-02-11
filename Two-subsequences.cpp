#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.size();
        string a, b;
        int num1,num2=0;
        for(int i=0; i<len; i++){
            num1 = (int)s[i];
    
            if(num1 > num2){
                num1 = num2;
            }
        }
        a  = (char)num1;
        cout << a << endl;
    }
}