#include <iostream>
using namespace std;
int main()
{
    char Y,N;
    Y = 'y', 'Y';
    N = 'n', 'N';
    char press;
    cout << "Do you want to quit?" << endl;
    cin >> press;
    if(press == Y){
        cout << ")': Good Bye :'( "<< endl;
    }
    else if(press == N){
        cout << "^_^ Welcome Again :) " << endl;
    }

    return 0;
}
