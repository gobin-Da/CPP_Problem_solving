#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    bool flag = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'H')
        {
            flag = 1;
            break;
        }
        else if (str[i] == 'Q')
        {
            flag = 1;
            break;
        }
        else if (str[i] == '9')
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}