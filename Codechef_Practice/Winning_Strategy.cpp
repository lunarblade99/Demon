#include <bits/stdc++.h>
using namespace std;
int main()
{
    // For fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input the no. of tests
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        long long int first_sum = 0, second_sum = 0;

        first_sum += a[0];
        if (n >= 2)
            second_sum += a[1];
        if (n >= 3)
            second_sum += a[2];
        if (n > 3)
        {
            for (int i = 3; i < n; i++)
            {
                if (i % 2 == 1)
                    first_sum += a[i];

                else
                {
                    second_sum += a[i];
                }
            }
        }
        if (first_sum > second_sum)
        {
            cout << "first" << endl;
        }
        else if (first_sum == second_sum)
        {
            cout << "draw" << endl;
        }
        else
        {
            cout << "second" << endl;
        }
    }
    return 0;
}