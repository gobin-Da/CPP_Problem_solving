#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c, res1=0, res2=0, res3=0, res4=0, res5=0, res6=0;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    res1 = a + (b*c);
    res2 = (a*b) + c;
    res3 = (a+b)*c;
    res4 = (a*b*c);
    res5 = (a+b+c);
    res6 = a * (b+c);
    int ar[] = {res1, res2, res3, res4, res5, res6};
    int maxi = *max_element(ar, ar+6);
    cout << maxi << endl;
}