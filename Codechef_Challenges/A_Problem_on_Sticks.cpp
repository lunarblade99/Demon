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
        int c = 0;
        vector<ll> v;
        int n;
        cin >> n;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.push_back(temp);
            mp[v[i]]++;
            if (mp[v[i]] == 1 && v[i]!=0)
            {
                c++;
            }
        }

        cout << c << "\n";
    }

    return 0;
}