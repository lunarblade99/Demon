#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n], d[n][n], b[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
                d[i][j] = (i * n) + (j + 1);
            }
        }
        int c = 0;
        for (int k = n - 1; k >= 0; k--)
        {
            if (d[0][k] != a[0][k])
            {
                for (int i = 0; i < k; i++)
                {
                    for (int j = 0; j < k; j++)
                    {
                        a[i][j] = b[j][i];
                    }
                }
                c++;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        b[i][j] = a[i][j];
                    }
                }
            }
        }
        cout << c << "\n";
    }

    return 0;
}