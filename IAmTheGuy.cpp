#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, p, q, n=0, i;
    cin >> num >> p;
    int ar[250];
    for(i=0; i<p; i++){
        cin >> ar[i];
    }
    cin >> q;
    for(i=p; i<p+q; i++){
        cin >> ar[i];
    }
    sort(ar, ar+(p+q));
    for(i=0; i<p+q; i++){
        if(ar[i] != ar[i+1]){
            n++;
        }
    }
    if(n == num){
        cout <<  "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
}