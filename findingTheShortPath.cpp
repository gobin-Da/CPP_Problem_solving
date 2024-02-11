#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t, a[2], b[2], k[2], i, sub1=0, sub2=0, sub3=0, sum1=0, sum2=0, sum3=0;
    cin >> t;
    while(t--){
        for(i=0; i<2; i++){
            cin >> a[i] ;
            sum1 = a[0] + a[1];
        }
        
        for(i=0; i<2; i++){
            cin >> b[i] ;
            sum2 = b[0] + b[1];
        }

        for(i=0; i<2; i++){
            cin >> k[i] ;
            sum3 = k[0] + k[1];
        }
        if((sum1 < sum3) && (sum2 > sum3) && (sum3 - sum1 == 1) && (sum2- sum3 == 1)){
            sub1 = abs(sum3 - sum1) ;
            sub2 = abs(sum2 - sum3) ;
            sub3 = abs(sub1 + sub2 + 2) ;
        }

        else if((sum1 < sum3) && (sum2 > sum3)){
            sub1 = abs(sum3 - sum1) ;
            sub2 = abs(sum2 - sum3) ;
            sub3 = abs(sub1 + sub2) ;
        }

        else if((sum1 > sum3) && (sum2 < sum3)){
            sub1 = abs(sum3 - sum1) ;
            sub2 = abs(sum2 - sum3) ;
            sub3 = abs(sub1 + sub2 + 2) ;
        }

        else if((sum1 < sum3) && (sum2 < sum3) && (a[0] == b[0])){
            sub3 = abs(a[1] - b[1]);
        }

        else if((sum1 < sum3) && (sum2 < sum3) && (a[1] == b[1])){
            sub3 = abs(a[0] - b[0]);
        }

        else if((sum1 > sum3) && (sum2 > sum3) && (a[0] == b[0])){
            sub3 = abs(a[1] - b[1]);
        }

        else if((sum1 > sum3) && (sum2 > sum3) && (a[1] == b[1])){
            sub3 = abs(a[0] - b[0]);
        }

        cout << sub3 << endl;   
    }
}