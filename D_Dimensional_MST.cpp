#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

//attribution:-
//https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/

ll maxKey(ll key[], bool mstSet[], ll n)
{
    ll min = INT_MIN, min_index;
    for (ll v = 0; v < n; v++)
    {
        if (mstSet[v] == false && key[v] > min)
        {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, d;
    cin >> n >> d;
    ll input[n + 1][d + 1] = {0};
    ll graph[n + 1][n + 1] = {0};

    if (n == 1)
    {
        ll inp[d]={0};
        ll sum = 0;
        for (ll i = 0; i < d; i++)
        {
            cin >> inp[i];
            sum += inp[i];
        }
        cout << sum << "\n";
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < d; j++)
            {
                cin >> input[i][j];
            }
        }
        ll temp = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                for (ll k = 0; k < d; k++)
                {
                    if (i == j)
                    {
                        graph[i][j] = 0;
                    }
                    else
                    {
                        temp += abs(input[i][k] - input[j][k]);
                        graph[i][j] = temp;
                    }
                }
                temp = 0;
            }
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < n; j++)
        //     {
        //         cout << graph[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        ll parent[n + 1];
        ll key[n + 1];
        bool mstSet[n + 1];
        for (ll i = 0; i < n; i++)
        {
            key[i] = INT_MIN;
            mstSet[i] = false;
        }
        key[0] = 0;
        parent[0] = -1;
        for (ll count = 0; count < n - 1; count++)
        {
            ll u = maxKey(key, mstSet, n);
            mstSet[u] = true;
            for (ll v = 0; v < n; v++)
            {
                if (graph[u][v] && mstSet[v] == false && graph[u][v] > key[v])
                {
                    parent[v] = u;
                    key[v] = graph[u][v];
                }
            }
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << key[i] << " ";
        // }
        // cout << "\n";
        ll final_ans = 0;
        for (ll i = 1; i < n; i++)
        {
            final_ans += graph[i][parent[i]];
        }
        cout << final_ans << "\n";

        return 0;
    }
}