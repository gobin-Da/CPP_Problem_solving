#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, g=0;
    cin >> t;
    while(t--)
    {
        g = g + 1;
        string mon, mon2;
        char comma;
        int day, day2, year, year2, dif=0, ans=0;
        cin >> mon >> day >> comma >> year;
        cin >> mon2 >> day2 >> comma >> year2;

        if((mon == "January") || (mon == "February")){
            year = year;
        }
        else{
            year++;
        }

        if((mon2 == "January") || (mon2 == "February" && day2 < 29)){
            year2--;
        }
        else{
            year2 = year2;
        }


        int ml_4 = (year2/4) - (year-1)/4;
        int ml_100 = (year2/100) - (year-1)/100;
        int ml_400 = (year2/400) - (year-1)/400;

        ans = ml_4 + ml_400 - ml_100;

        cout << "Case "  << g << ": " << ans << endl;
    }
    return 0;
}