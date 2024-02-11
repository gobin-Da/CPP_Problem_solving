#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while(--n){
        cin >> points;
        if(min > points){
            min = points;
            ++amazing;
        }
        if(max < points){
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
}