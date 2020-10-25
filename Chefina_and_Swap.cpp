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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = (n * (n + 1)) / 2;

        if (sum % 2 == 0)
        {
            ll sum2 = sum / 2;
            ll d = n, count = 0, e = n;
            do
            {
                sum2 = sum2 - d;
                d--;
                count++;
                if (sum2 == 0)
                {
                    e -= d;
                    count += ((d) * (d - 1)) / 2;
                    count += ((e) * (e - 1)) / 2;
                }
            }while (sum2 > 0);

            cout << count << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
