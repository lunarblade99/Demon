/* Narcissistic no aka Armstrong numbers.  
There are no 2-digit Armstrong numbers.
There are four 3-digit Armstrong numbers. 371 = 3^3 + 7^3 + 1^3 [power is 3 because its 3 digits]
There are two 4-digit Armstrong numbers.*/
#include <bits/stdc++.h>
using namespace std;
int sum=0;
int armstrong(int n,int p)
{
   int temp = n;
   while(n>0)
   {
   int a=n%10;
   sum=sum+pow(a,p);
   n=n/10;
   }
   return (sum==temp)?0:1;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int n; cin>>n;
   int p=to_string(n).length();
   if(armstrong(n,p)==0){  cout<<"It's Armstrong no.\n"; }
   else{ cout<<"It's not Armstrong no.\n";  }
   return 0;
}