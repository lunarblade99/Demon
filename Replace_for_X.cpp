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
        ll n, x, p, k;
        cin >> n >> x >> p >> k;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);

        if (b[p - 1] == x)
        {
            cout << 0 << "\n";
        }
        else if (k >= p && b[p - 1] >= x)
        {
            ll op2 = 0;
            for (ll i = p - 1; i >= 0; i--)
            {
                if (b[i] > x)
                {
                    op2++;
                }
                if (b[i] == x)
                {
                    break;
                }
            }
            cout << op2 << "\n";
        }
        else if (k <= p && b[p - 1] <= x)
        {
            ll op = 0;
            for (ll i = p - 1; i < n; i++)
            {
                if (b[i] < x)
                {
                    op++;
                }
                if (b[i] == x)
                {
                    break;
                }
            }
            cout << op << "\n";
        }
        else if (k <= p && b[p - 1] >= x)
        {
            cout << -1 << "\n";
        }
        else if (k >= p && b[p - 1] <= x)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// try these ->
// 6 4 4 2
// 0 1 2 3 3 3 -> 3

// 6 4 4 1
// 0 1 2 3 3 4 -> 2

// 6 4 3 2
// 0 1 2 3 3 3 -> 4