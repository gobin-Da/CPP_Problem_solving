#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s;

    s.erase(s.begin() + 1, s.end() - 1);
    cout << s << endl;
}