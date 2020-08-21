#include <bits/stdc++.h>
using namespace std;

int number_fre(int res, int answer[])
{
    if (res - 48 != -48)
    {
        answer[res - 48]++;
    }
    return 0;
}

char getMaxOccuringChar(char *str, int answer[])
{
    int count[256] = {0};
    int len = strlen(str);
    int max = 0; // Initialize max count
    char result; // Initialize result
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }
    return number_fre(result, answer);
}

void printSubSeqRec(string str, int n, int answer[], int index = -1, string curr = "")
{
    if (index == n)
        return;

    //cout << curr << "\n";

    char char_array[curr.length()];
    strcpy(char_array, curr.c_str());

    getMaxOccuringChar(char_array, answer);

    for (int i = index + 1; i < n; i++)
    {

        curr += str[i];
        printSubSeqRec(str, n, answer, i, curr);
        curr = curr.erase(curr.size() - 1);
    }
    return;
}

string convertToString(char *a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int answer[10] = {0};
        int n;
        cin >> n;
        char mainchar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mainchar[i];
        }
        string str = convertToString(mainchar, n);
        printSubSeqRec(str, str.size(), answer);

        for (int i = 1; i <= n; i++)
        {
            cout << answer[i]%1000000007 << " ";
        }
        cout << "\n";
    }
    return 0;
}
