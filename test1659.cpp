#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        double a1, a2, b1, b2;
        int i, j;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if (b1 == b2)
        {
            if (a1 > a2)
            {
                cout << ">" << endl;
            }
            else if (a1 < a2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else if (b1 > b2)
        {
            b1 -= b2;
            for (i = 1; i <= b1; i++)
            {
                a2 /= 10;
            }
            if (a1 > a2)
            {
                cout << ">" << endl;
            }
            else if (a1 < a2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else{
            b2 -= b1;
            for (i = 1; i <= b2; i++)
            {
                a1/= 10;
            }
            if (a1 > a2)
            {
                cout << ">" << endl;
            }
            else if (a1 < a2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
}