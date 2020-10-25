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

        ll n;
        cin >> n;
        int a[n];
        //int czero = 0, cone = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // if (a[i] == 0)
            // {
            //     czero++;
            // }
            // else
            // {
            //     cone++;
            // }
        }
        int cc = 0, final = 0, odds = 0;
        int ho = 0, ho2 = 0, he = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     while (a[i] == 0)
        //     {
        //         cc++;
        //         if (final <= cc)
        //         {
        //             if (final == cc && cc % 2 == 1 && cc > 1)
        //             {
        //                 odds = 1;
        //                 final = cc;
        //             }
        //             else
        //             {
        //                 final = cc;
        //             }
        //         }
        //         i++;
        //     }
        //     cc = 0;
        // }
        int flag = 0;
        for (ll i = 0; i < n; i++)
        {
            while (a[i] == 0)
            {
                cc++;
                if (a[i + 1] != 0)
                {
                    if (cc % 2 == 1)
                    {
                        if (cc == ho && cc != 1)
                        {
                            flag = 1;
                        }
                        if (ho <= cc)
                        {
                            ho2 = ho;
                            ho = cc;
                        }
                        else if (ho2 <= cc)
                        {
                            ho2 = cc;
                        }
                    }
                    else
                    {
                        if (he < cc)
                        {
                            he = cc;
                        }
                    }
                    i++;
                }
                else
                {
                    i++;
                }
            }
            cc = 0;
        }

        //cout << ho2 << " " << ho << "\n";
        //cout<< final <<"\n";
        // cout<<czero<<" "<<cone<<"\n";
        if (ho == 0 && he == 0)
        {
            cout << "No"
                 << "\n";
        }
        else if (he > ho)
        {
            cout << "No"
                 << "\n";
        }
        else
        {
            if (((ho - he) <= (ho / 2) || flag == 1) && (he > 0))
            {
                cout << "No"
                     << "\n";
            }
            else if ((ho - ho2) <= (ho / 2))
            {
                cout << "No"
                     << "\n";
            }
            else
            {
                cout << "Yes"
                     << "\n";
            }
        }

        // else
        // {
        //     if (final % 2 == 0)
        //     {
        //         cout << "No"
        //              << "\n";
        //     }
        //     else
        //     {
        //         if (odds == 0)
        //         {
        //             cout << "Yes"
        //                  << "\n";
        //         }
        //         else
        //         {
        //             cout << "No"
        //                  << "\n";
        //         }
        //     }
        // }
    }

    return 0;
}