/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i,j,k, sum=0, count=0;
        cin >> n;
        for(i=0; i<n; i++){
            sum = 2*n;
            
            for(j=0; j<n; j++){
                cout << "(";
                count++;
                cout << ")";
            }
            cout << endl; 
        }
    }
} */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a, i, j, k=0;
    cin >> a;
    for(i=0;i<a;i++){
        for(j=0;j<k;j++)
            printf("(");
        for(j=0;j<a-k;j++)
            printf("()");
        for(j=0;j<k;j++)
            printf(")");

        k++;
        printf("\n");
        }
    }
    return 0;
}