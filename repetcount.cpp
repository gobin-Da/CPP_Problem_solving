#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int g = 0; g<t; g++){
        string s;
        cin >> s;
        int size = s.size();

        int count = 0;
        int mount = 0;
        int div = 0;
        for(int i=0; i<size ; i++){
            if(s[i] == 'a' || s[i+1] == 'b' || s[i+2] == 'c'){
                    count = count + 3;
            }
            else {
                mount = mount + 3;
                div = abs(count - mount) ;
            }
            
        }

        cout << div << endl;
    }
}