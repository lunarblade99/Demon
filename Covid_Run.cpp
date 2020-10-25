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
            a[i] = i;
        }
        ll k;
        cin >> k;
        ll x, y;
        cin >> x >> y;
        ll flag = 0, c = 0;

        for (ll i = x; c < 1001; i += k)
        {
            if (i > n)
            {
                i = i % n;
            }
            if (i == y)
            {
                flag = 1;
                break;
            }
            else
            {
                c++;
            }
        }
        if (flag == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}