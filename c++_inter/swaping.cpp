#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

long double quad(ll q)
{
    long double discriminant = 1 + (4 * q);

    long double d = (-1 + sqrt(discriminant)) / 2;

    if (d >= 0)
    {
        return d;
    }
    else
    {
        long double d = (-1 - sqrt(discriminant)) / 2;
    }
    return d;
}

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
        ll sum = ((n) * (n + 1)) / 2;
        if (sum % 2 == 0)
        {
            ll count = 0;
            long double ans;
            ans = quad(sum);
            //ans += 0.1;
            //cout << ans << "\n";

            int temp = 1000000 * ans;
            if (temp % 1000000 == 0)
            {
                ll q = ceil(ans);
                ll qq = n - q;
                ll sum = 0;
                sum += qq;
                sum += ((qq) * (qq - 1)) / 2;
                sum += ((q) * (q - 1)) / 2;
                cout << sum << "\n";
            }
            else
            {
                ll p = floor(ans);
                p = n - p;
                cout << p << "\n";
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
