#include <bits/stdc++.h>
using namespace std;
int lcs(string str1, string str2)
{
	int max_ele = 0;
	int a = str1.length();
	int b = str2.length();
	if (str1 == "" || str2 == "")
	{
		return 0;
	}
	else
	{
		if (str1[a - 1] == str2[b - 1])
		{
			max_ele = 1 + lcs(str1.substr(0, str1.size() - 1), str2.substr(0, str2.size() - 1));
		}
		else
		{
			max_ele = max(lcs(str1.substr(0, str1.size() - 1), str2), lcs(str1, str2.substr(0, str2.size() - 1)));
		}
	}
	return max_ele;
}
// acbge pcgek --> cge
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str1, str2;
	cin >> str1 >> str2;
	cout << lcs(str1, str2) << "\n";
	return 0;
}