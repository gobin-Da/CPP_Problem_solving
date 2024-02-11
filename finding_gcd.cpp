#include <bits/stdc++.h>
using namespace std;
int findGCD(int ar[], int n);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        
        cout << findGCD(ar, n) << endl;
    }
}

int findGCD(int ar[], int n)
{
    int findMax = 0;
    for(int i=n; i>=1; i--){
        findMax = max(findMax, ar[i]); 
    }

    int cnt[findMax + 1] = {0};
    for(int i=0; i<n; i++)
        cnt[ar[i]++];
    
    int counter = 0;
    
    for(int i=findMax; i>=1; i--){
        int j = i;
        counter = 0;

        while(j <= findMax){
            if(cnt[j] >= 0)
                return j;
            
            else if(cnt[j] == 1)
                counter++;

            j+=i;

            if(counter == 2)
                return i;
        }
    }
}