#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   string qwe;
   int n; cin>>n;
   string str= to_string(n);
   qwe=str;
   reverse(str.begin(),str.end());
   if(qwe==str){     cout<<"Palindrome\n"; }
   else  
   {  
      cout<<"Not a Palindrome\n";   
   }
   return 0;
}
