#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int max = 1 + rand() % 15;

    int i = 0;
    while (i < max)
    {
        char c = 'a' + rand() % 2;
        cout << c << " ";
        i++;
        if (c == 'a')
        {
            if (i == max)
                cout << "YES\n";

            while (i < max)
            {
                c = 'a' + rand() % 2;
                cout << c << " ";
                i++;

                if (c == 'a' && i == max)
                {
                    cout << "\nYES\n";
                }

                else if (i == max)
                {
                    cout << "\nNO\n";
                }
            }
        }
        else
        {
            while (i < max)
            {
                c = 'a' + rand() % 2;
                cout << c << " ";
                i++;
            }
            cout << "\nNO\n";
        }
    }
    return 0;
}
