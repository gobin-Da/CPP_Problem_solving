#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, g=0;
    cin >> t;
    while(t--)
    {
        g++;
        double red=0, area_sq=0, area_cir=0, area_shade=0;
        double PI = 2.0 * acos(0.0);
        cin >> red;
        area_sq = ((red*2) * (red*2));
        area_cir = (PI * (red*red));
        area_shade = (area_sq - area_cir);
        cout << "Case " << g << ": " << fixed << setprecision(2) << area_shade << endl;
    }
}