#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){

    int a ;
    float n;
    cin >> a >> n;
    if(n  >= 25.2 && n <= 28){
        float i  = 5.0;
        cout << fixed << setprecision(1);
        cout << a << " " << i << endl;
    }
    
     else if(n  >= 23.8 && n < 25.2){
        float i = 4.5;
        cout << a << " " << i << endl;
    }

    else if(n  >= 22.4 && n < 23.8){
       float i = 4.0 ;
       cout << fixed << setprecision(1);
        cout << a << " " << i << endl;
    }

    else if(n  >= 21 && n < 22.4){
       float i = 3.5;
        cout << a << " " << i << endl;
    }

    else if(n  >= 19.6 && n < 21 ){
       float i = 3.0;
       cout << fixed << setprecision(1);
        cout << a << " " << i << endl;
    }

    else if(n  >= 18.2 && n < 19.6 ){
      float  i = 2.5;
        cout << a << " " << i << endl;
    }

    else if(n  >= 16.8  && n < 18.2 ){
       float i = 2.0;
       cout << fixed << setprecision(1);
        cout << a << " " << i << endl;
    }

    else {
       float i = 0.0 ;
       cout << fixed << setprecision(1);
        cout << a << " " << i << endl;
    }
    }
    return 0 ; 
}