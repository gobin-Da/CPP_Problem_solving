#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, res=0;
    cin >> n >> m;
    for(i=1; i<=n; i++){
        if(i%2 != 0){
            for(j=1; j<=m; j++){
                cout << "#";
            }
            cout << endl;
        }
        else{
            if(i==2){
                for(j=1; j<=m-1; j++){
                    cout << "." ;
                }
                cout << "#" << endl;
            }
            else{

                res = i/2;
                if(res % 2 == 0){
                    cout << "#";
                    for(j=1; j<=m-1; j++){
                        cout << "." ;
                        }
                    cout << endl;
                }
                else{
                    for(j=1; j<=m-1; j++){
                        cout << "." ;
                    }
                    cout << "#" << endl;
                }
                
            }          
        }
    }
}