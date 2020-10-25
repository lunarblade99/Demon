#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

ll f2(vector<ll> fatrat, ll solvent, ll poke)
{
    for (ll i = 1; i < fatrat.size(); i++)
    {

        if (fatrat[i] % 2 != 0)
        {
            ll temp1 = (1 << (fatrat.size() - 1));
            solvent = solvent + temp1;
        }
        if (poke % 2 != 0)
        {
            solvent = solvent + 1;
        }
        cout << 2 << " " << solvent << endl;
        cout.flush();
        ll result;
        cin >> result;
        return result;
    }
}

ll f1()
{
    ll n;
    ll solvent = 0;
    cin >> n;
    vector<ll> rat;
    ll a;
    for (ll i = 1; i <= 20; i++)
    {
        cout << i << " " << (1 << i) << endl;
        cout.flush();
        cin >> a;
        rat.push_back(a);
    }

    reverse(rat.begin(), rat.end());
    ll comp2 = n * (1 << 20);
    ll comp = rat[0] - comp2;

    for (ll i = 1; i < rat.size(); i++)
    {
        if (rat[i] >= comp)
        {
            ll temp2 = n - (rat[i] - comp);
            ll temp3 = (1 << (rat.size() - i));
            ll temp4 = temp2 / temp3;
            rat[i] = temp4 / 2;
        }
    }
    f2(rat, solvent, comp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        if (!f1())
        {
            break;
        }
        cout << endl;
        cout.flush();
    }

    return 0;
}