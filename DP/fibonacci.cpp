#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fib(ll n, ll lookup[])
{
	if (lookup[n] == -1)
	{
		if (n == 0 || n == 1)
		{
			lookup[n] = n;
		}
		else
		{
			lookup[n] = fib(n - 1, lookup) + fib(n - 2, lookup);
		}
	}
	return lookup[n];
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	ll lookup[n+1];
	memset(lookup, -1, sizeof(lookup));
	for (int i=0; i<n; i++)
	{
	  	cout << fib(i, lookup) << "\n";
	}

	return 0;
}