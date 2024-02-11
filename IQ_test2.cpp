#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int ar[num], i, pop;
    for(i=0; i<num; i++){
        cin >> ar[i];
    }

     for(i=0; i<num; i++){
       if(ar[i] * 2 == ar[i+1]){
           continue;
       }
       else{
           pop = i;
           break;
       }
    }
    cout << pop << endl;
    return 0;
}