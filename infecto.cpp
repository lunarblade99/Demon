#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

ll division(ll a, ll b, ll n, ll xyz)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = res * xyz % MOD;
        }
        n = n / 2;
        xyz = xyz * xyz % MOD;
    }
    ll tempo = a % MOD * (res % MOD);
    return tempo % MOD;
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
        ll deck[n], solvent;
        for (ll i = 0; i < n; i++)
        {
            cin >> deck[i];
        }
        ll m = 0, mv = 0;
        for (ll i = 0; i < n; i++)
        {
            if (m < deck[i])
            {
                m = deck[i];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (m == deck[i])
            {
                mv++;
            }
        }
        if (n == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        if (mv % 2 != 0)
        {

            ll r = 1, k = 2;
            while (n)
            {
                if (n & 1)
                {
                    r = (r * k) % MOD;
                }

                n = n / 2;
                k = (k * k) % MOD;
            }
            solvent = r % MOD;
        }
        else
        {
            ll r = 1, k = 2, qwe = n - mv, r2 = 1, k2 = 2;
            while (n)
            {
                if (n & 1)
                {
                    r = (r * k) % MOD;
                }

                n = n / 2;
                k = (k * k) % MOD;
            }
            while (qwe)
            {
                if (qwe & 1)
                {
                    r2 = (r2 * k) % MOD;
                }

                qwe = qwe / 2;
                k2 = (k2 * k2) % MOD;
            }
            ll answer = 1, nor = mv, ron = mv / 2;
            ll kk = min(ron, nor - ron);
            for (ll i = 0; i < kk; i++)
            {
                answer = ((answer % MOD) * ((nor - i) % MOD)) % MOD;
                answer = division(answer, i + 1, MOD ^ 2, i + 1);
            }
            ll temp1 = ((r2 % MOD) * (answer % MOD)) % MOD;
            temp1 = temp1 % MOD;
            ll temp2 = r % MOD;
            solvent = temp2 - temp1;
        }
        if (solvent < 0)
        {
            solvent = (solvent + MOD) % MOD;
        }
        cout << solvent % MOD << "\n";
    }
    return 0;
}