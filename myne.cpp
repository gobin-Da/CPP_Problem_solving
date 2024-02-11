/* *********************************************** */
/*                  Om Namah                       */
/*               Gobinda Bhattacharjee             */
/*    Rangamati Science and Technology University  */
/* *********************************************** */
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    double num;
    ll half=0, ans=0;
    cin >> num;
    ll num2 = num;
    half = ceil(num/2);
    if(num2 % 2 == 0){
        ans = half;
        cout << ans << endl;
    }
    else{
        ans = -half;
        cout << ans << endl;
    }
    return 0;
}


/*
if(str[i] == 'I'){
            value++;
        }
        else if(str[i] == 'V'){
            value+=5;
        }
        else if(str[i] == 'X'){
            value+=10;
        }
        else if(str[i] == 'L'){
            value+=50;
        }
        else if(str[i] == 'C'){
            value+=100;
        }
        else if(str[i] == 'D'){
            value+=500;
        }
        else if(str[i] == 'M'){
            value += 1000;
        }
*/