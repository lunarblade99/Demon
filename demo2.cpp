#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

void resetDistance(vector<ll> &dist)
{
    ll l = dist.size();
    for (ll i = 0; i < l; i++)
    {
        dist[i] = i;
    }
}
void resetInfected(vector<ll> &infected, ll n)
{
    vector<ll> temp(infected.size(), 0);
    infected = temp;
    infected[n] = 1;
}

vector<ll> getCurrentlyInfected(vector<ll> &infected)
{
    vector<ll> out;
    for (ll i = 0; i < infected.size(); i++)
    {
        auto x = infected[i];
        if (x == 1)
        {
            out.push_back(i);
        }
    }
    return out;
}

int getCountOfOne(vector<ll> &arr)
{
    ll count = 0;
    for (auto &&i : arr)
    {
        if (i == 1)
        {
            count++;
        }
    }
    return count;
}

void solve2(vector<ll> &arr)
{
    ll n = arr.size();
    vector<ll> count(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count[i] += 1;
            }
        }
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                count[i] += 1;
            }
        }
        printf("%d %d\n", *min_element(count.begin(), count.end()), *max_element(count.begin(), count.end()));
    }
}

void solve(vector<ll> &arr)
{
    ll l = arr.size();
    if (l == 0)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    if (l == 1)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    vector<ll> infected(l, 0);
    vector<ll> dist(l, 0);
    ll min_ = INT32_MAX;
    ll max_ = 0;

    for (ll i = 0; i < l; i++)
    {
        //so ith is infected
        resetInfected(infected, i);
        resetDistance(dist);
        int loopFor = 100;
        while (loopFor--)
        {
            for (ll j = 0; j < l; j++)
            {
                dist[j] == arr[j];
            }
            unordered_set<ll> hashset;
            vector<ll> alreadyInfected = getCurrentlyInfected(infected);
            for (auto &&i : alreadyInfected)
            {
                hashset.insert(dist[i]);
            }
            for (ll j = 0; j < l; j++)
            {
                if (infected[j])
                {
                    continue;
                }
                if (hashset.count(dist[j]))
                {
                    infected[j] = 1;
                }
            }
            hashset.clear();
        }
        ll ans = getCountOfOne(infected);
        min_ = min(min_, ans);
        max_ = max(max_, ans);
    }
    cout << min_ << " " << max_ << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 3)
        {
            solve2(arr);
        }
        else
        {
            solve(arr);
        }
    }

    return 0;
}