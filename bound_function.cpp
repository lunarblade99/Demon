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
	int n;
	cin >> n;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	int x;
	cin >> x;

	auto a = lower_bound(array, array + n, x);
	auto b = upper_bound(array, array + n, x);
	
	auto r = equal_range(array, array + n, x);
	//use equal range rather than ub & lb to get both ub & lb and all elements = x

	cout << *r.first << " " << *r.second << "\n";
	cout << r.second << " " << r.first << "\n";
	
	cout << r.second - r.first << " -> total elements = x" << "\n";
	//one line solution above

	cout << *a << " " << *b << "\n";
	cout << b - a << " -> total elements = x" << "\n";
	// upper bound - lower bound to get all elements

	return 0;
}