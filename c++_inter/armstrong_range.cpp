#include <bits/stdc++.h>
using namespace std;
void armstrong(int n,int p)
{
   int sum=0;
   int temp = n;
   while(n>0)
   {
   int a=n%10;
   sum=sum+pow(a,p);
   n=n/10;
   }
   if(sum==temp){cout<<temp<<" ";}

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int n; cin>>n;
   for(int i=0;i<=n;i++)
   {
      int p=to_string(i).length();
      armstrong(i,p);
   }

   return 0;
}