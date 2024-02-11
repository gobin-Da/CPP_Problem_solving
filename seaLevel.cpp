#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll a, i, count = 0, mount = 0;
    cin >> a;
    char str[a];
    for(i=0; i<a; i++){
        cin >> str[i];
    

     if(str[i] == 'U'){
        count++;
    }

    else if(str[i] == 'D'){
        count--;
    }

    if(count == 0){
       mount++;
    }
    
    }
    cout << mount << endl;
}