#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map <char, int> value = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int i, res=0, s=0;
    s = str.size();
    for(i=0; i<s; i++){
        if(value[str[i]] >= value[str[i+1]]){
            res = res + value[str[i]];
        }
        else{
            res = abs(res - value[str[i]]);
        }
    }

    cout << res << endl;
}