#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll year, lip_year , not_leap_year, i;
    cin >> year;

    if((year <= 1917)){
        if((year % 4) == 0){
            cout << "12.09." << year << endl;
        }
        else{
            cout << "13.09." << year << endl;
        }
    }

    else if(year == 1918){
        cout << "26.09." << year << endl;
    }

    else if(year > 1918) {
        if((year % 400 == 0)){
            cout << "12.09." << year << endl;
        }
        else if((year % 4 == 0) && (year % 100 != 0)){
            cout << "12.09." << year << endl;
        }
        else{
            cout << "13.09." << year << endl;
        }
    }
}