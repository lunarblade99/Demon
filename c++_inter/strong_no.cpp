/*Strong number is a special number whose sum of factorial of digits is equal to the original number.
 For example: 145 is strong number. Since, 1! + 4! + 5! = 145 [1, 2, 145, 40585]->btw 1 to 1,00,000*/
#include <bits/stdc++.h>
using namespace std;
int sum=0;

int fact(int a){  return (a==0)||(a==1)?1:(a*fact(a-1)); }

int strong(int n){
   int t=n;
   while(n>0){
      int a=n%10;
      sum=sum+fact(a);
      n=n/10;
   }
   return (sum==t)?1:0;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int n; cin>>n;
   cout<<strong(n)<<"\n";
   return 0;
}