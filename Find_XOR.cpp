#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

ll subtask()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> tot;
    ll a;
    for (ll i = 1; i <= 20; i++)
    {
        cout << i << " " << (1ul << i) << endl;
        cout.flush();
        cin >> a;
        tot.push_back(a);
    }

    reverse(tot.begin(), tot.end());
    ll to = tot[0] - n * (1ul << 20); 

    for (ll i = 1; i < tot.size(); i++)
    {
        if (tot[i] >= to)
        {
            tot[i] = ((n - (tot[i] - to) / (1ul << (tot.size() - i))) / 2);
        }
    }

    for (ll i = 1; i < tot.size(); i++)
    {            

        if (tot[i] % 2 != 0)
        {
            ans += 1ul << (tot.size() - 1);    

        }
        if (to % 2 != 0)
        {
            ans++;
        }
        cout << 2 << " " << ans << endl;
        cout.flush();
        ll result;
        cin >> result;
        return result;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        if (!subtask())
        {
            break;
        }
        cout << endl;
        cout.flush();
    }

    return 0;
}