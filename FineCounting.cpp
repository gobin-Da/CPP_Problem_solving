#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1, m1, y1, d2, m2, y2, fine = 0;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if(d1 <= d2 && m1 <= m2 && y1 <= y2){
        cout << "0" << endl;
    }

    else if(d1 != d2 ){
        if(m1 == m2 && y1 == y2){
            fine = (d1 - d2)*15; 
        }
        else if(m1 < m2 && y1 == y2){
            fine = 0; 
        }
        else if(m1 > m2 && y1 == y2){
            fine = (m1 - m2)*500; 
        }
        else if(y1 <= y2){
            fine = 0;
        }
        else if(y1 > y2){
            fine = (y1 - y2) * 10000;
        }

        cout << fine << endl;
    }

    else if(d1 == d2 ){
        if(m1 <= m2 && y1 == y2){
            fine = 0; 
        }
        else if(m1 > m2 && y1 == y2){
            fine = (m1 - m2)*500; 
        }
        else if(y1 <= y2){
            fine = 0;
        }
        else if(y1 > y2){
            fine = (y1 - y2) * 10000;
        }

        cout << fine << endl;
    }


}