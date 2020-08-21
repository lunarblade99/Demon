#include <bits/stdc++.h>
using namespace std;

void reverse(int a[],int start,int end){
	while(start<end){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}

void rotate(int a[],int n,int d){
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);

}

void print(int a[],int n){
	for (int i=0; i<n; i++)
	{
	  cout<<a[i]<<" ";
	}
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;cin>>t;
while(t--){
   char ch;cin>>ch;
   int n;cin>>n;
   int a[n];
   for (int i=0; i<n; i++)
   {
	 cin>>a[i];
   }
   int d;cin>>d;
   if(ch=='r'||ch=='R'){
	   d=n-d;
   }
   rotate(a,n,d);
   print(a,n);
   cout<<"\n";
}
   return 0;
}