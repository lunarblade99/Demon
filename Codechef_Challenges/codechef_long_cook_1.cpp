#include <bits/stdc++.h>
using namespace std;

int gometric(int power, float ratio, int n)
{
    return (power * (1 - pow(ratio, n))) / (1 - ratio);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {

        int health, n = 1;
        cin >> health;
        int power;
        cin >> power;
        float ratio = 0.5;
        int d = power;
        while (d > 1)
        {
            n++;
            d = d / 2;
        }
        if (gometric(power, ratio, n) >= health)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}