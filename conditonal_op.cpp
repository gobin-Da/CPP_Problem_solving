#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    //(num1 > num2) ? cout << num1 << " is greater." : cout << num2 << " is greater.";
    //int max = (num1 > num2) ? num1 : num2;
    //cout << max << endl;

    //(num1 > num2) ? cout << num1 << " is positive." : cout << num2 << " is positive.";
    (num1 % 2 == 0) ? cout << num1 << " is even." : cout << num1 << " is odd.";
    return 0;
}