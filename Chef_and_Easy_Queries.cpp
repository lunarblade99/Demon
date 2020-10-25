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
        ll q = n;
        vector<ll> a;
        vector<ll> b;

        ll k;
        cin >> k;
        ll sum = 0;
        ll days = 0;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
            //sum += a[i];
        }
        b.push_back(a[0]);

        ll p = 0;
        ll cf = 0;
        while (cf >= 0)
        {
            //sum -= k;
            days++;
            cf = b[p] - k;
            //cout << "\\\\" << cf << "\n";
            if (cf < 0)
            {
                break;
            }
            else
            {
                ll l = p + 1;
                if (l >= n)
                {
                    //ll temp = 0 + cf;
                    //b.push_back(temp);
                    ll r = b[p] / k;
                    days = n + r;
                    break;
                }
                else
                {
                    ll temp = a[l] + cf;
                    b.push_back(temp);
                }
            }
            p++;
        }
        cout << days << "\n";
    }

    return 0;
}