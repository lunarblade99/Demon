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
        ll x[n], y[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        ll sum = n;
        while (n > 5)
        {
            n = n / 2;
            sum += n;
        }
        cout << sum << "\n";
    }
    return 0;
}