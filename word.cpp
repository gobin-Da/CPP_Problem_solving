#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, count=0, mount=0;
    for(i=0; i<s.size(); i++){
        if((s[i] >= 65) && (s[i] < 97)){
            count++;
        }
        else{
            mount++;
        }
    }

    if(count > mount){
        for(i=0; i<s.size(); i++){
            if(s[i] >= 97)
            s[i] = s[i] - 32;
        }
        cout << s << endl;
    }

    else if(count < mount){
        for(i=0; i<s.size(); i++){
            if(s[i] < 97)
            s[i] = s[i] + 32;
        }
        cout << s << endl;
    }

    else{
        for(i=0; i<s.size(); i++){
            if(s[i] < 97)
            s[i] = s[i] + 32;
        }
        cout << s << endl;
    }
}