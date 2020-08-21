#include <bits/stdc++.h>
using namespace std;
int frequency_counter(string &str2, string &str1)
{
    int length_of_pattern = str2.length();
    int length_of_text = str1.length();
    int res = 0;
    for (int i = 0; i <= length_of_text - length_of_pattern; i++)
    {
        int j;
        for (j = 0; j < length_of_pattern; j++)
            if (str1[i + j] != str2[j])
                break;
        if (j == length_of_pattern)
        {
            res++;
            j = 0;
        }
    }
    return res;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    getline(cin, str1);
    cin >> str2;
    int wfq = frequency_counter(str2, str1);
    int str2no = str2.length();
    int str1no = str1.length();
    int arrystr2[str2no] = {0};
    int count = 0;

    for (int j = 0; j < str2no; j++)
    {
        for (int i = 0; i < str1no; i++)
        {
            if (str1[i] == str2[j])
                arrystr2[j]++;
        }
    }
    for (int i=0; i<str2no; i++)
    {
      cout<<arrystr2[i]<<" ";
    }
    if (str2no == 1)
    {
        cout << arrystr2[0] << "\n";
    }
    else
    {
        int a = str2no, b = str2no + 2;

        int sum = a * arrystr2[0];
        int subtractor = (a + (b * (str2no - 1))) - wfq;
        for (int i = 1; i < str2no; i++)
        {
            if(arrystr2[i-1]==arrystr2[i])
            {
                sum = sum + arrystr2[i] * a;
            }
            else
            {
                sum = sum + arrystr2[i] * b;

            }
        }
         if (wfq == 0)
         {
             cout << sum;
         }
         else if(wfq == 1)
         {
             cout << sum - subtractor;
         }
         else
         {
             cout<< sum - subtractor - (6*(wfq-1));
         }
    }
    return 0;
}