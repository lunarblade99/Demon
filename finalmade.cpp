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
        double long velocity[n];
        double long arr[n][n];
        ll infecto[n][n];
        ll answer[n] = {0};

        memset(arr, -1, sizeof(arr));
        memset(infecto, 0, sizeof(infecto));

        for (ll i = 0; i < n; i++)
        {
            cin >> velocity[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i == j)
                {
                    arr[i][j] = 0;
                }
                else
                {
                    if (velocity[i] > velocity[j])
                    {
                        double long d = velocity[i] - velocity[j];
                        arr[i][j] = ((j + 1) - (i + 1)) / d;
                    }
                    else
                    {
                        double long d = velocity[j] - velocity[i];
                        arr[i][j] = ((i + 1) - (j + 1)) / d;
                    }
                }
            }
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[i][j] == INFINITY || arr[i][j] == -INFINITY)
                {
                    arr[i][j] = -1;
                }
                //cout << arr[i][j] << " ";
            }
            //cout << "\n";
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                for (ll k = 0; k < n; k++)
                {
                    if (arr[i][j] >= 0)
                    {
                        //cout<<arr[i][j] <<"  "<< arr[j][k]<<"\n";

                        //cout<<arr[j][k]<<" ";
                        if (arr[i][j] <= arr[j][k] && arr[j][k] >= 0)
                        {
                            infecto[i][k] += 1;
                        }
                    }
                }
            }
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < n; j++)
        //     {
        //         cout << infecto[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (infecto[i][j] > 0)
                {
                    answer[i] += 1;
                }
            }
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << answer[i] << " ";
        // }
        // cout<<"\n";

        sort(answer, answer + n);
        ll min = answer[0];
        ll max = answer[n - 1];
        cout << min << " " << max << "\n";
    }

    return 0;
}