#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b, count=0, mount=0, i, equation1=0, equation2=0;
        cin >> n >> a >> b;
        char str[n];
        cin >> str;
        for(i=0; i<n; i++)
        
            if(str[i] == '0'){
                count++;
            }
            else if(str[i] == '1'){
                mount++;
            }
        equation1 = count * a + b;
        equation2 = mount * a + b;

        if(equation1 != 0 ){
            cout << equation1 << endl;
        }
        else{
            cout << equation2 << endl;
        }
    }
}