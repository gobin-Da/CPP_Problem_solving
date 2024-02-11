#include <iostream>
using namespace std;
int main()
{
    int num, i, multi;
    cout << "Enter a number: ";
    cin >> num;
    for(i=1; i<=10; i++){
        multi = num*i;
        cout << num << " * " << i << " = " << multi << endl; 
    }
}