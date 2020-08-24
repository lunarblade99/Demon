#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long int c, r;
        cin >> c >> r;
        int cc = 0, rr = 0;
        cc = c / 9;
        rr = r / 9;
        if (c % 9 != 0)
        {
            cc++;
        }
        if (r % 9 != 0)
        {
            rr++;
        }
        if (rr <= cc)
        {
            cout << 1 << " " << rr << "\n";
        }
        else
        {
            cout << 0 << " " << cc << "\n";
        }
    }
    return 0;
}