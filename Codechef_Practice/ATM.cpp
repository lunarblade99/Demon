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

    float x, y;
    cin >> x >> y;
    if ((fmod(x,5) == 0) && (y >= (x + 0.50)))
    {
        cout << fixed << setprecision(2) << y - x - 0.50 << "\n";
    }
    else
    {
        cout<< y << "\n";
    }

    return 0;
}