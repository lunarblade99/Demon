#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int p, flag = 0;
        cin >> p;
        long long int k;
        cin >> k;
        long long int a[p];
        for (int i = 0; i < p; i++)
        {
            cin >> a[i];
        }
        sort(a, a + p, greater<long long int>());
        for (int i = 0; i < p; i++)
        {
            if (k % a[i] == 0)
            {
                flag = 1;
                cout << a[i] << "\n";
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}