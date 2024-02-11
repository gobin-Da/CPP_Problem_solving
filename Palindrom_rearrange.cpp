#include <bits/stdc++.h>
using namespace std;
string arrangePalindrome(string str, int n);

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << arrangePalindrome(str, n);
    return 0;
}

string arrangePalindrome(string str, int n)
{
    int i;
    unordered_map <char, int> mymap;
    for(i=0; i<n; i++){
        mymap[str[i]]++;
    }

    int CntOdd=0;
    char charOdd;

    for(auto x: mymap){
        if(x.second % 2 != 0){
            CntOdd++;
            charOdd = x.first;
        }
    }

    if(CntOdd > 1 or CntOdd == 1 and n%2 == 0){
        return "NO";
    }

    string firstHalf = "", secondHalf = "";
    for(auto x : mymap){
        string s(x.second / 2, x.first);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }

    return(CntOdd == 1) 
                        ? ("YES\n" + firstHalf + charOdd + secondHalf)
                        : ("YES\n" + firstHalf + secondHalf);
}