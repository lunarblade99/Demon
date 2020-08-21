/*Perfect number, a positive integer that is equal to the sum of its proper divisors.
The smallest perfect number is 6, which is the sum of 1, 2, and 3.
Other perfect numbers are 28, 496, and 8,128.
The discovery of such numbers is lost in prehistory.*/
#include <bits/stdc++.h>
using namespace std;

int perfect(int n){
  int sum=0;
    for(int i=1;i<=n/2;i++){
     if(n%i==0){
       sum=sum+i;
     }
   }
   if(sum==n){cout<<n<<" ";}
   else{}
   return 0;
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);

   int n,sum=0;cin>>n;
       
    for(int i=1;i<=n;i++)   
    perfect(i);

   return 0;
}