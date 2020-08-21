#include <bits/stdc++.h>
using namespace std;
class Solution
{   
public: 
   string multiply(string num1, string num2);
};
 
string Solution::multiply(string nums1, string nums2)
{
   int n = nums1.size();
   int m = nums2.size();
   string ans(n + m, '0');
   for (int i = n - 1; i >= 0; i--)
   {
      for (int j = m - 1; j >= 0; j--)
      {
         int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
         ans[i + j + 1] = p % 10 + '0';
         ans[i + j] += p / 10;
      }
   }
   for (int i = 0; i < m + n; i++)
   {
      if (ans[i] != '0')
         return ans.substr(i);
   }
   
   return "0";
}

main()
{
   Solution ob;
   int t=0;
   cin >> t;
   while (t--)
   {
      string str1;
      string str2;
      cin >> str1 >> str2;

      if ((str1.at(0) == '-' && str2.at(0) != '-') ||
          (str1.at(0) != '-' && str2.at(0) == '-'))
         cout << "-";

      if (str1.at(0) == '-' && str2.at(0) != '-')
      {
         str1 = str1.substr(1);
      }
      else if (str1.at(0) != '-' && str2.at(0) == '-')
      {
         str2 = str2.substr(1);
      }
      else if (str1.at(0) == '-' && str2.at(0) == '-')
      {
         str1 = str1.substr(1);
         str2 = str2.substr(1);
      }
      cout << ob.multiply(str1, str2) << "\n";
   }
}
