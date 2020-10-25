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

    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            int temp = (int)ch;
            sum += (temp - 48);
        }

        cout << sum << "\n";
    }

    return 0;
}