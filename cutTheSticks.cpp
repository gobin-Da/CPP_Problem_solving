#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, i, mini=0, count = 0, n;
  cin >> a;
  int ar[a];
  for(i=0; i<a; i++)
    cin >> ar[i];

    n = sizeof(ar)/sizeof(ar[0]);
    sort(ar, ar+n);

    for(i=0; i<a; i++){
      ar[i] = ar[i] - ar[0];
      if(ar[i] != 0){
        count++;
      }
    }
  cout << a << endl;
}