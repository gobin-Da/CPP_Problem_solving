#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2, s3, s4;
    int len1, len2, len3, i, j;
    bool f = 1;
    cin >> s1 >> s2 >> s3;
    s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());

    if (s4.length() <= s3.length())
    {
        for (i = 0; i < s3.length(); i++)
        {
            if (s3[i] == s4[i])
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
}