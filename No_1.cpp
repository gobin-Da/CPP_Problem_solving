#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
 
    temp[j++] = arr[n-1];
 
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}

int main()
{
    int num, n, sum=0, arrSum=0;
    cin >> num;
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cin>>sizeOne;
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cin>>sizeTwo;
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }

    for(int j=0; j<num; j++){
        sum += j;
    }
    sort(arrMerge, arrMerge+k);
    n = removeDuplicates(arrMerge, k);
    for(i=0; i<k; i++){
        for(int j=0; j<num; j++){
            if(j == arrMerge[i]){
                arrSum += arrMerge[i];
            }
        }
    }
    if(arrSum >= sum){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    

}