#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans=0;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        if(str == "Tetrahedron"){
            ans += 4;
        }

        if(str =="Cube"){
            ans += 6;
        }

        if(str == "Octahedron"){
            ans += 8;
        }

        if(str == "Dodecahedron"){
            ans += 12;
        }

        if(str == "Icosahedron" ){
            ans += 20;
        }
    }

    cout << ans << endl;
}