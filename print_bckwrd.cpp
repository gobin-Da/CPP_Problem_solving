#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of array: " << " ";
    cin >> n;
    int ar[n];
    cout << "Enter the numbers to be reversed: " << endl;
    for(i=0; i<n; i++){
        cin >> ar[i];
    }
    cout << "Enter the numbers to be reversed: " << endl;
    for(i=n-1; i>=0; i--){
        cout << ar[i] << " ";
    }
}