#include <iostream>
using namespace std;
int main()
{
    int num, i, cnt=0;
    cin >> num;
    int ar[num];
    for(i=0; i<num; i++){
        cin >> ar[i];
    }

    for(i=0; i<num; i++){
        if(ar[i] == 1){
            cnt++;
        }
    }

    if(cnt != 0){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }
}