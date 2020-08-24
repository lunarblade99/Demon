#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, cost;
		cin >> n >> cost;
		int a[n + 1];
		map<int, int> mp;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int duplicates[n + 1][n + 1] = {0};
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				duplicates[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			mp.clear();
			for (int j = i; j < n; j++)
			{

				duplicates[i][j] = (j == 0) ? 0 : duplicates[i][j - 1];

				if (mp.count(a[j]))
				{
					if (mp[a[j]] == 1)
					{
						duplicates[i][j] += 2;
					}
					else
					{
						duplicates[i][j]++;
					}
				}

				mp[a[j]]++;
			}
		}
		int final_answer = INT_MAX;
		int no_of_tables = 100;
		int dp[101][1001] = {0};

		for (int i = 1; i < n + 1; i++)
		{
			dp[1][i] = duplicates[0][i - 1];
		}
		for (int i = 2; i <= no_of_tables; i++)
		{
			for (int j = 2; j <= n; j++)
			{
				int best = INT_MAX;
				for (int cost = 1; cost < j; cost++)
				{
					best = min(best, dp[i - 1][cost] + duplicates[cost][j - 1]);
				}
				dp[i][j] = best;
			}
		}

		for (no_of_tables = 1; no_of_tables <= 100; no_of_tables++)
		{
			final_answer = min(no_of_tables * cost + dp[no_of_tables][n], final_answer);
		}
		cout << final_answer << endl;
	}
	return 0;
}