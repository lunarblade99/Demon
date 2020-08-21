#include <bits/stdc++.h>
using namespace std;

int leapyear(int n){
   return (n%4==0)&&(n%100!=0)||(n%400==0)?1:0;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

   int n; cin>>n;
   cout<<leapyear(n)<<"\n";
   return 0;
}
/* For leap year -> n/4 but not by 100 @same time or n/400 alone;
   (n%4==0)&&(n%100!=0)||(n%400==0) */
