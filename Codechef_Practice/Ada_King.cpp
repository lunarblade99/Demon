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
        int k; cin>>k;
        int blocked = 64 - k;

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (i == 8 && j == 8)
                {
                    printf("O");
                    continue;
                }

                if (blocked > 0)
                {
                    printf("X");
                    blocked--;
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
