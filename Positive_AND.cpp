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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        ll ans[3] = {2, 3, 1};
        if (n == 1)
        {
            cout << 1;
        }
        else if (ceil(log2(n)) == floor(log2(n)))
        {
            cout << -1;
        }
        else if (n == 3)
        {
            cout << ans[0] << " " << ans[1] << " " << ans[2];
        }
        else if (n > 3)
        {
            for (ll i = 0; i < n; i++)
            {
                if (i < 3)
                {
                    cout << ans[i] << " ";
                }
                else
                {
                    if (ceil(log2(i + 1)) == floor(log2(i + 1)))
                    {
                        ll temp = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = temp;
                        cout << a[i] << " " << a[i + 1] << " ";
                        i++;
                    }
                    else
                    {
                        cout << a[i] << " ";
                    }
                }
            }
        }
        cout << "\n";
    }

    return 0;
}