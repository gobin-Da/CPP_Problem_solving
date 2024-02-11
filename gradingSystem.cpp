#include <iostream>
using namespace std;
int main()
{
    int a, i, res=0, grade=0;
    float div=0;
    cin >> a;
    int ar[a];
    for(i=0; i<a; i++){
        cin >> ar[i];

        div = ar[i] / 5;
        res = div*5;

        if(ar[i]==res){
            cout << ar[i] << endl;
        }

        else if(res < 35){
            cout << ar[i] << endl;
        }

        else if(res < ar[i]){
            div += 1;
            res = div*5;
            if((res - ar[i]) < 3){
                cout << res << endl;
            }
            else if((res - ar[i]) >= 3){
                cout << ar[i] << endl;
            }
        }
    }
}