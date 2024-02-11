#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, i, j, sum1=0, sum2=0, cnt1=0, cnt2=0, min1=0, min2=0, max1=0, max2=0, mnt1=0, mnt=0, ans=0;
        cin >> n >> k;
        int ar[n], br[n];
        for(i=0; i<n; i++){
            cin >> ar[i];
        }
        for(j=0; j<n; j++){
            cin >> br[j];
        }

        for(i=0; i<n; i++){
            sum1 += ar[i];
        }
        for(j=0; j<n; j++){
            sum2 += br[j];
        }

        min1 = *min_element(ar, ar + n);
        max1 = *max_element(ar, ar+n);

        min2 = *min_element(br, br+n);
        max2 = *max_element(br, br+n);

        for(i=0; i<n; i++){
            if(ar[i] == max1){
                cnt1++;
            }
            if(ar[i] == min1){
                mnt1++;
            }
        }
        for(j=0; j<n; j++){
            if(br[j] == max2){
                cnt2++;
            }
            if(br[j] == min2){
                mnt++;
            }
        }

        if(sum1 > sum2 && n>0){
            if(min1 == max2){
                ans = sum1 + (max2 * cnt2) - (min1 * mnt1);
            }
            else if(min1 < max2){
                ans = sum1 + (max2 * cnt2) - (min1 * mnt1);
            }
        }
    }
}