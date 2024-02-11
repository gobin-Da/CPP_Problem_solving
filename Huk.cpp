#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cin >> num;
    for(i=0; i<num; i++){
        if(i%2 == 0){
            cout << "I hate ";
        }
        else{
            cout << "I love ";
        }
        if(i != num-1){
            cout << "that ";
        }
        else{
            cout << "it ";
        }
    }

}