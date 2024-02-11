#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
	ll num, num1, num2, num3;
	cin >> num;
    if(num >= 100 && num<=1000000000){
        num1 = num%1000;
            num = num/1000;
        num2 = num%1000;
            num = num/1000;
        num3 = num%1000000;
        cout << num3 << ',' << num2 << ',' << num1 << endl;
    }
	
	return 0;
}
