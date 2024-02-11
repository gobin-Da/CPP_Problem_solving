#include <iostream>
#include <vector>
using namespace std;
int diagonaDifference(vector<vector<int>> arr)
{
        int i,j,size, di1, di2;
        i=j=di1=di2=0;
        size = arr.size();
        j = size-1;

        while(i<size){
            di1 += arr[i][i];
            di2 += arr[i][j];
            ++i;
            j--;
        }
        
    
    return abs(di1 - di2);
}