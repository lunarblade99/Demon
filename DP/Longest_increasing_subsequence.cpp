#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lis(ll a[], ll n)
{
	ll ans[n + 1];
	for (int i = 0; i < n; i++)
	{
		ans[i] = 1;
	}

	for (ll i = 1; i < n; i++)
	{
		for (ll j = 0; j < i; j++)
		{
			if (a[i] > a[j] && ans[i] < ans[j] + 1)
			{
				ans[i] = ans[j] + 1;
			}
		}
	}

	return *max_element(ans, ans + n);
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
		ll a[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		cout << lis(a, n) << "\n";
	}
	return 0;
}