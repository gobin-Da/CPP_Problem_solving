#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    while(w--){
        int a[3], j;
        for(j=0; j<3; j++){
            cin >> a[j];
        }

        sort(a, a+3);
        for(j=0; j<3; j++){
            if(a[0] == a[1]){
                if(a[2] % 2 == 0){
                    cout << "YES" << endl;
                    break;
                }
                else{
                    cout << "NO" << endl;
                    break;
                }
            }
            else if(a[1] == a[2]){
                if(a[0] % 2 == 0){
                    cout << "YES" << endl;
                    break;
                }
                else{
                    cout << "NO" << endl;
                    break;

                }
            }
            else if(a[0] + a[1] == a[2]){
                cout << "YES" << endl;
                break;
            }
            else{
                cout << "NO" << endl;
                break;
            }
        }
    }
}