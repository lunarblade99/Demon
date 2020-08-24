#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int f[2] = {0};
        for (int i = 0; i < n; i++)
        {
            char ch = str[i];
            int temp = ch - '0';
            f[temp]++;
        }
        if ((f[0] != f[1]) || (f[0] == 0) || (f[1] == 0))
        {
            cout << "IMPOSSIBLE"
                 << "\n";
        }
        else
        {
            string ans1;
            int z = f[0] / 2, o = f[1] / 2;

            z = z / 2;
            o = o / 2;

            for (int i = 0; i < n / 4; i++)
            {
                if (z != 0)
                {
                    ans1[i] = '0';
                    z--;
                }
                else
                {
                    ans1[i] = '1';
                }
            }
            for (int i = 0; i < n / 4; i++)
            {
                cout << ans1[i];
            }
            for (int i = n / 4 - 1; i >= 0; i--)
            {
                cout << ans1[i];
            }
            for (int i = 0; i < n / 4; i++)
            {
                cout << ans1[i];
            }
            for (int i = n / 4 - 1; i >= 0; i--)
            {
                cout << ans1[i];
            }
            cout << "\n";
        }
    }
    return 0;
}