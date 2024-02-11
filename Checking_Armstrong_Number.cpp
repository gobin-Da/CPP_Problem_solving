#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    int res = n;
    while(n>0){
        int rem = n%10;
        sum += rem*rem*rem;
        n = n/10;
    }

    if(sum == res){
        cout << "Its an armstrong number" << endl;
    }
    else{
        cout << "Its not" << endl;
        cout << sum << endl;
    }
}