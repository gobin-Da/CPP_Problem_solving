#include <bits\stdc++.h>
using namespace std;
main(){
    string s;
    int i;
    cin >> s;
    for(i=0; i<s.size() ; i++){
        char c = tolower(s[i]);
        if(c =='a' || c == 'e' || c == 'i'  || c == 'o' || c == 'u' || c == 'y'){
            
        }
        else{
            cout << "." << c;
        }
    }
    return 0;
}