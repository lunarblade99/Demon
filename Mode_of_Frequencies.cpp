#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define setbits(x) __builtin_popcountll(x)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],f[10000]={0},ff[10000]={0};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            f[a[i]]++;
        }
        for (int i = 0; i < 10000; i++)
        {
            ff[f[i]]++;
        }
        // for (int i = 0; i < 10; i++)
        // {
        //     cout<<ff[i]<<" ";
        // }
        int ans1=0,ans2=0;
        for (int i = 1; i < 10000; i++)
        {
            if(ff[i]>ans1){
                ans1=ff[i];
                ans2=i;
            }
        }
        cout<<ans2<<"\n";        
    }
    
    return 0;
}