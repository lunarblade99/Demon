#include <bits/stdc++.h>
using namespace std;

string binary(int n)
{
   if (n == 0)
   {
      return "0";
   }
   else if (n == 1)
   {
      return "1";
   }
   else
   {
      return binary(n / 2) + binary(n % 2);
   }
}

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      cout << binary(n) << "\n";
   }

   return 0;
}
/*  
string binary = bitset<8>(128).to_string(); //to binary
std::cout<<binary<<"\n";

unsigned long decimal = bitset<8>(binary).to_ulong();
cout<<decimal<<"\n";

*/