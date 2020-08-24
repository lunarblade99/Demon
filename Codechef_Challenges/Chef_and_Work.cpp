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
        int n, k;
        cin >> n >> k;
        int w[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            if (w[i] > k)
            {
                flag = 1;
            }
        }
        int sum = w[0], trip = 1;
        if (flag == 1)
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (sum + w[i] > k)
                {
                    trip++;
                    sum = w[i];
                }
                else
                {
                    sum += w[i];
                }
            }
            cout << trip << "\n";
        }
    }

    return 0;
}