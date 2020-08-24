#include <bits/stdc++.h>
using namespace std;
void solution(string strc, string strbd)
{
    long long int count = 0;
    for (long long int i = 0; i < strc.length(); i++)
    {
        if (strc[i] > strbd[0])
        {
            break;
        }
        else
        {
            count++;
        }
    }
    strc.insert(count, strbd);
    cout << strc << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string stra, strb, strc;
        cin >> stra >> strb;
        string strbd = strb;
        sort(stra.begin(), stra.end());
        sort(strb.begin(), strb.end());
        long long int lstra = stra.length();
        long long int i = 0, j = 0, k = 0;
        while (true)
        {
            if (stra[i] == strb[j])
            {
                i++;
                j++;
            }
            else
            {
                char temp = stra[i];
                strc.insert(k, 1, temp);
                k++;
                i++;
            }
            if (i == lstra)
            {
                break;
            }
        }
        sort(strc.begin(), strc.end());
        solution(strc, strbd);
        // long long int count = 0;
        // for (long long int i = 0; i < strc.length(); i++)
        // {
        //     if (strc[i] > strbd[0])
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         count++;
        //     }
        // }

        // strc.insert(count, strbd);
        // cout << strc << "\n";
    }
    return 0;
}