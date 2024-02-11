#include <bits/stdc++.h>
using namespace std;
void division(double* div, int n){
    int i, min=0;
    for(i=0; i<n; i++){
        div[i] = abs(div[i] - div[i+1]);
    }
    min = *min_element(div, div+n);
    cout << min << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, min=0;
        cin >> n;
        double ar[n];

        for(i=0; i<n; i++){
            cin >> ar[i];
        }

        sort(ar, ar+n);

        division(ar, n);
    }
}