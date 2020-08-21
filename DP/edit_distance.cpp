#include <bits/stdc++.h>
using namespace std;

int Levenshtein(string str1, string str2)
{
	int a = str1.length();
	int b = str2.length();
	int dp[a + 1][b + 1];
	for (int i = 0; i <= a; i++)
	{
		dp[i][0] = i;
	}
	for (int i = 0; i <= b; i++)
	{
		dp[0][i] = i;
	}
	int mv = 0;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (str1[i] == str2[j])
			{
				dp[i][j] = dp[i - 1][j - 1];
			}
			else
			{
				if (dp[i - 1][j - 1] < dp[i - 1][j] && dp[i - 1][j - 1] < dp[i][j - 1])
				{
					mv = dp[i - 1][j - 1];
				}
				else if (dp[i - 1][j] < dp[i][j - 1])
				{
					mv = dp[i - 1][j];
				}
				else
				{
					mv = dp[i][j - 1];
				}
				dp[i][j] = mv + 1;
			}
		}
	}
	return dp[a][b];
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str1, str2;
	cin >> str1 >> str2;
	cout << Levenshtein(str1, str2) << "\n";
	return 0;
}