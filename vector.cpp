#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &m){
    for(int i=0; i < m.size() ; i++){
        cout << m[i] << " " ;
    }
}

int main()
{
    vector <int> v;
    int element, size ;
    for(int i = 0; i<5; i++){
        cout << "Enter an elemnet : ";
        cin >> element;
        v.push_back(element);
    }
    display(v);
}