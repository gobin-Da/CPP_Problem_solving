#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    int ar[100000];
    cin >> t;
    while(t--){
        int d=0, rem=0;
        cin >> n;
        if(n >= 1000){
            rem = n%1000;
            ar[d++] = n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem = n%100;
            ar[d++] = n-rem;
            n%=100;
        }
        if(n>=10){
            rem = n%10;
            ar[d++] = n-rem;
            n%=10;
        }
        if(n>0 && n<10){
            ar[d++] = n;
        }
        vector <int> num;
        for(int i=0; i<d; i++){
            num.push_back(ar[i]);
        }
        cout << num.size() << endl;
        for(int i=0; i<num.size(); i++){
            cout << num[i] << " ";
        }
        cout << endl;
    }
}