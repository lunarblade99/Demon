#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string string_1, string_2, main_string;
        cin >> string_1 >> string_2;
        ll n = string_1.size(), m = string_2.size();
        ll al[27];
        memset(al, 0, sizeof(al));
        ll al1[27];
        for (int i = 0; i < n; i++)
        {
            al[string_1[i] - 'a']++;
        }
        for (int i = 0; i < m; i++)
        {
            al[string_2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            al1[i] = al[i];

        for (int i = 0; i <= (string_2[0] - 'a'); i++)
        {
            while (al[i] > 0)
            {
                main_string += (char)(i + 97);
                al[i]--;
            }
        }

        main_string += string_2;
        for (int i = 0; i < 26; i++)
        {
            while (al[i] > 0)
            {
                main_string += (char)(i + 97);
                al[i]--;
            }
        }
        string string_final;
        for (int i = 0; i < string_2[0] - 'a'; i++)
        {
            while (al1[i] != 0)
            {
                string_final += (char)(i + 97);
                al1[i]--;
            }
        }
        string_final += string_2;
        for (int i = 0; i < 26; i++)
        {
            while (al1[i] != 0)
            {
                string_final += (char)(i + 97);
                al1[i]--;
            }
        }
        cout << min(main_string, string_final) << "\n";
    }
}
