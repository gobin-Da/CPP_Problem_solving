#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll num, i, sum_a=0, sum_d=0;
    cin >> num;
    string str;
    cin >> str;

    for(i=0; i<num; i++){
        if(str[i] == 'D'){
            sum_d++;
        }
        else if(str[i] == 'A'){
            sum_a++;
        }
    }

    if(sum_a < sum_d){
        cout << "Danik" << endl;
    }
    else if(sum_a > sum_d){
        cout << "Anton" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}