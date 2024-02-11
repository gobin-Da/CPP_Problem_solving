#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c, i, j, cnt = 0, mi, res = 0, b = 0;
        cin >> n >> m >> r >> c;
        char s[n][m];
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                cin >> s[i][j];
            }
        }

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (s[i][j] == 'B')
                {
                    cnt++;
                }
            }
        }

        mi = INT_MIN;
        bool f = 0;

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (s[r][c] == 'B')
                {
                    b = 0;
                }
                else
                {
                    b = 1;
                    if (res >= mi && s[i][j] == 'B')
                    {
                        res = abs((i - j) - (r - c));
                        mi = res;
                    }
                }
            }
        }

        if (b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (res == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << res << endl;
            }
        }
    }
}