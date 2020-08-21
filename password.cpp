#include <bits/stdc++.h>
using namespace std;

void allpermutations(char set[], string prefix, int n, int k)
{
   if (k == 0)
   {
      cout << prefix << endl;
      return;
   }

   for (int i = 0; i < n; i++)
   {
      string newPrefix;
      newPrefix = prefix + set[i];
      allpermutations(set, newPrefix, n, k - 1);
   }
}

int main()
{
   char set[] = {'A', 'S', 'D'};
   int n = sizeof(set) / sizeof(set[0]);
   int k;
   cin >> k;
   allpermutations(set, "", n, k);
}
