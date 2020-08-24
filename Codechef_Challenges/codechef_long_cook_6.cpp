#include <bits/stdc++.h>
using namespace std;
int counter = 0;
void final_function(vector<int> arr, int l, int result[], int n)
{
	int a[10] = {0};
	counter++;
	int total_subsequences = pow(2, n) - 1;
	for (int i = 0; i < arr.size(); i++)
	{
		a[arr[i]]++;
	}
	int max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = i;
		}
	}
	//	cout << max << " ";
	result[max - 1]++;
	if (total_subsequences == counter)
	{
		for (int i = 0; i < n; i++)
		{
			//if (i == n - 1)
			cout << result[i] << " ";
		}
		cout << "\n";
		counter = 0;
	}
}
void printSubsequences(vector<int> arr, int index, vector<int> subarr, int result[], int n)
{
	if (index == arr.size())
	{
		int l = subarr.size();
		if (l != 0)
		{
			final_function(subarr, l, result, n);
		}
	}
	else
	{
		printSubsequences(arr, index + 1, subarr, result, n);
		subarr.push_back(arr[index]);
		printSubsequences(arr, index + 1, subarr, result, n);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr;
		vector<int> b;
		int result[n] = {0};
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		printSubsequences(arr, 0, b, result, n);
	}
	return 0;
}
