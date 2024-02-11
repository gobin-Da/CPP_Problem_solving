#include <bits/stdc++.h>
using namespace std;;
int main()
{
    int t;
    cin >> t;
    while(t--){
        double n;
        int a, b, i, j, k;
        cin >> n >> a >> b;

        j = ceil(n/2);
        k = n;

        if(a==0 && b==0){
            for(i=1; i<=n; i++){
                cout << i << " ";
            }
            cout << endl;
        }

        else if(n!=0 && a<n/2 && b<n/2 && a<b){
            if(k%2 == 0){
                cout << n << " ";
                for(i=2; i<n; i+=2){
                    cout << i << " ";
                }
                for(i=1; i<n; i+=2){
                    cout << i << " ";
                }
                cout << endl;
            }
            else if(k%2 != 0){
                cout << n << " ";
                for(i=1; i<n; i+=2){
                    cout << i << " ";
                }
                for(i=2; i<n; i+=2){
                    cout << i << " ";
                }
                cout << endl;
            }
            
        }

        else if(n!=0 && a<n/2 && b<n/2 && a==b){
            cout << n << " ";
            for(i=1; i<n; i+=2){
                cout << i << " ";
            }
            for(i=2; i<n; i+=2){
                cout << i << " ";
            }
            cout << endl;
        }

        else if(n!=0 && a<n/2 && b<n/2 && a>b){
            if(k%2 == 0){
                cout << 1 << " ";
                for(i=3; i<=n; i+=2){
                    cout << i << " ";
                }
                for(i=n; i>=2; i-=2){
                    cout << i << " ";
                }
                cout << endl;
            }
            else if(k%2 != 0){
                cout << 1 << " ";
                for(i=3; i<=n; i+=2){
                    cout << i << " ";
                }
                for(i=n-1; i>=2; i-=2){
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        
        else{
            cout << -1 << endl;
        }
    }
}