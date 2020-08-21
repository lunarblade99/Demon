#include <bits/stdc++.h>
using namespace std;
// Euclidean algo ie = b/a -> a/remainder_of(b/a) -> ....till remainder is 0(then divisor is answer)
int gcd(int a,int b)
{ return (a%b==0) ? b : gcd(b,a%b); }

int lcm(int c,int d)
{ return c*d/gcd(c,d); } //LCM = product of both no. / their GCD 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int a,b;
   cin>>a>>b;  // a>=b(ALWAYS)
   if(a<b)
   { int t=a; a=b; b=t; }
   cout<<"GCD : "<<gcd(a,b)<<"\n";
   cout<<"LCM : "<<lcm(a,b)<<"\n";
   return 0;
}
