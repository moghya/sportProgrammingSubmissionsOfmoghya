#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,x;
    cin>>n;
    ll a[100005]={0};
    ll m=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
        m=max(m,x);
    }
    ll dp[100005]={0};
    dp[1]=a[1];
    for(i=2;i<=m;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+i*a[i]);
        
    }
    cout<<dp[m];
    
    return 0;
    
}